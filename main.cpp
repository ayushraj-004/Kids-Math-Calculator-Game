#include <iostream>
#include <stdlib.h>

int main() {
    // Basic setup configurations
    int score = 0;
    int level = 1;
    int streak = 0;
    int langChoice = 1;
    int gameRound = 0;
    
    // Core game math values
    int val1 = 5;
    int val2 = 3;
    int targetAns = 8;
    int inputAns = 0;
    int userMenuChoice = 0;

    // 1. Clean Language Interface Selector
    std::cout << "========================================" << std::endl;
    std::cout << "SELECT YOUR LANGUAGE / BHAASHA CHUNEIN:" << std::endl;
    std::cout << "1. English" << std::endl;
    std::cout << "2. Hindi (Written in English Alphabets)" << std::endl;
    std::cout << "3. Hinglish (Casual Mix)" << std::endl;
    std::cout << "4. Espanol (Spanish)" << std::endl;
    std::cout << "5. Japanese (Nihongo)" << std::endl;
    std::cout << "6. Chinese (Zhongwen)" << std::endl;
    std::cout << "Enter system choice (1-6): ";
    std::cin >> langChoice;

    if (langChoice < 1 || langChoice > 6) {
        langChoice = 1;
    }

    // Welcome Screen
    std::cout << "\n========================================" << std::endl;
    if (langChoice == 1) std::cout << "=== KIDS MEGA MATH CALCULATOR EXPLORER ===" << std::endl;
    else if (langChoice == 2) std::cout << "=== GANIT CALCULATOR GAME MEIN SWAGAT HAI ===" << std::endl;
    else if (langChoice == 3) std::cout << "=== WELCOME TO THE FUN MATH GAME ===" << std::endl;
    else if (langChoice == 4) std::cout << "=== BIENVENIDO AL JUEGO DE MATEMATICAS ===" << std::endl;
    else if (langChoice == 5) std::cout << "=== ANSAN EXPLORER GAME NI YOKOSO ===" << std::endl;
    else std::cout << "=== SHUXUE ERTONG TANXIANJIA ===" << std::endl;

    // Fixed Action Sequence Loop for 5 Active Rounds
    for (gameRound = 1; gameRound <= 5; gameRound++) {
        
        // Dynamic Question Assignment Grid
        if (gameRound == 1) { val1 = 8; val2 = 4; targetAns = 12; }
        else if (gameRound == 2) { val1 = 15; val2 = 6; targetAns = 9; }
        else if (gameRound == 3) { val1 = 5; val2 = 5; targetAns = 25; }
        else if (gameRound == 4) { val1 = 30; val2 = 12; targetAns = 42; }
        else { val1 = 9; val2 = 4; targetAns = 36; }

        while (1) {
            std::cout << "\n----------------------------------------" << std::endl;
            
            // Multilingual Question Rendering Box
            if (langChoice == 1) {
                std::cout << "Level: " << level << " | Score: " << score << std::endl;
                if (gameRound == 2) std::cout << "Question: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Question: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Question: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Your Answer: ";
            } else if (langChoice == 2) {
                std::cout << "Level: " << level << " | Score: " << score << std::endl;
                if (gameRound == 2) std::cout << "Prashn: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Prashn: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Prashn: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Apna Uttar Likhein: ";
            } else if (langChoice == 3) {
                std::cout << "Level: " << level << " | Score: " << score << std::endl;
                if (gameRound == 2) std::cout << "Question: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Question: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Question: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Answer batao: ";
            } else if (langChoice == 4) {
                std::cout << "Nivel: " << level << " | Puntos: " << score << std::endl;
                if (gameRound == 2) std::cout << "Pregunta: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Pregunta: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Pregunta: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Tu Respuesta: ";
            } else if (langChoice == 5) {
                std::cout << "Reberu: " << level << " | Sukoa: " << score << std::endl;
                if (gameRound == 2) std::cout << "Mondai: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Mondai: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Mondai: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Kotae: ";
            } else {
                std::cout << "Dengji: " << level << " | Fenshu: " << score << std::endl;
                if (gameRound == 2) std::cout << "Wenti: " << val1 << " - " << val2 << " = ?" << std::endl;
                else if (gameRound == 3 || gameRound == 5) std::cout << "Wenti: " << val1 << " * " << val2 << " = ?" << std::endl;
                else std::cout << "Wenti: " << val1 << " + " << val2 << " = ?" << std::endl;
                std::cout << "Da'an: ";
            }

            std::cin >> inputAns;

            if (inputAns == targetAns) {
                score = score + 10;
                streak = streak + 1;
                
                // 🔊 WINNING SOUND EFFECT: Chime audio simulation via Native ASCII System Beeps
                std::cout << "\a"; 
                
                if (langChoice == 1) std::cout << "\n>>> [CORRECT ANSWER] Brilliant! +10 Points" << std::endl;
                else if (langChoice == 2) std::cout << "\n>>> [SAHI JAWAB] Bahut Achhe! +10 Ank" << std::endl;
                else if (langChoice == 3) std::cout << "\n>>> [RIGHT ANSWER] Mast Jawab Mila! +10 Pts" << std::endl;
                else if (langChoice == 4) std::cout << "\n>>> [CORRECTO] Muy bien! +10 Puntos" << std::endl;
                else if (langChoice == 5) std::cout << "\n>>> [SEIKAI] Subarashii! +10 Ten" << std::endl;
                else std::cout << "\n>>> [DUI LE] Zhen bang! +10 Fen" << std::endl;

                if (streak >= 2 && level < 3) {
                    level = level + 1;
                    streak = 0;
                    std::cout << "\a"; // Double beep alert sound on Level Up!
                    std::cout << "\n========================================" << std::endl;
                    std::cout << "⚡🚀 LEVEL UP! ADVANCING TO LEVEL " << level << " 🚀⚡" << std::endl;
                    std::cout << "========================================" << std::endl;
                }
                break;
            } 
            else {
                // 🔊 LOSING SOUND EFFECT & 🎬 FLASH SHAKE ANIMATION EFFECT VIA CONSOLE FLASH FLUSH
                std::cout << "\a" << std::endl;
                std::cout << "  !! WARNING !!  " << std::endl;
                std::cout << " [SHAKE WINDOW] " << std::endl;
                std::cout << "  !! WARNING !!  " << std::endl;

                if (langChoice == 1) {
                    std::cout << "\n[WRONG ANSWER] \n1. Try This Question Again \n2. Move To Next Question \nChoice (1-2): ";
                } else if (langChoice == 2) {
                    std::cout << "\n[GALAT UTTAR] \n1. Is Prashn Ko Fir Se Karein \n2. Agla Prashn Dekhein \nChoice (1-2): ";
                } else if (langChoice == 3) {
                    std::cout << "\n[WRONG ANSWER] \n1. Dobara Try Karo \n2. Naya Question Chahiye \nChoice (1-2): ";
                } else if (langChoice == 4) {
                    std::cout << "\n[INCORRECTO] \n1. Intentar de nuevo \n2. Siguiente pregunta \nChoice (1-2): ";
                } else if (langChoice == 5) {
                    std::cout << "\n[HUSEIKAI] \n1. Mou ichido \n2. Tsugi no mondai \nChoice (1-2): ";
                } else {
                    std::cout << "\n[CUOWU] \n1. Zai shi yici \n2. Xia yi ti \nChoice (1-2): ";
                }
                
                std::cin >> userMenuChoice;

                if (userMenuChoice == 2) {
                    streak = 0;
                    
                    // Detailed Kid Explanation Box
                    if (langChoice == 1) std::cout << "\n[EXPLANATION]: We computed the numbers. Correct answer was: " << targetAns << std::endl;
                    else if (langChoice == 2) std::cout << "\n[SPASHTIKARAN]: Ganit ko hal karne par sahi uttar tha: " << targetAns << std::endl;
                    else if (langChoice == 3) std::cout << "\n[EXPLANATION]: Is math operation ka sahi answer " << targetAns << " tha." << std::endl;
                    else if (langChoice == 4) std::cout << "\n[EXPLICACION]: El resultado correcto paso a paso era: " << targetAns << std::endl;
                    else if (langChoice == 5) std::cout << "\n[SETSUMEI]: Keisan no tadashii kotae wa: " << targetAns << std::endl;
                    else std::cout << "\n[JIESHI]: Zhege suanshu de zhengque da'an shi: " << targetAns << std::endl;
                    
                    break;
                }
            }
        }
    }

    // Game Over Matrix
    std::cout << "\n========================================" << std::endl;
    std::cout << "GAME OVER! Your Final Combined Score: " << score << std::endl;
    std::cout << "========================================" << std::endl;

    return 0;
}