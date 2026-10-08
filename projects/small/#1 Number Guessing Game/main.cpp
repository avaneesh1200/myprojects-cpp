// SPDX-License-Identifier: Apache-2.0
// Copyright (c) 2026 Avaneesh Shahi
// See the LICENSE file for more information on usage, reproduction and attribution



//------------------------------------------------------
// This project is a number guessing name __1 - A number guessing game__
// no gui - terminal based
//------------------------------------------------


/*
* built using →
* C:\Users\avane>g++ --version
* g++ (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r1) 16.2.0
* Copyright (C) 2026 Free Software Foundation, Inc.
* T his is free software; see the sourcep for copying conditions.  There is NO
* warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
*/

#include <iostream>
#include <random>
#include <string>

int main() {

    int randomNumber;
    int input = 0;
    int inputCount = 0;
    // Some compilers may need a preprocessor statement #include <string> for the datatypye declaration (std::string) while some may not
    std::string playAgain = "Y";

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 100);
   
    randomNumber = distrib(gen);

    std::cout << "====================" << '\n' << "NUMBER GUESSING GAME" << '\n' << "====================" << '\n' << std::endl;

    std::cout << "I'm thinking of a number between 1 and 100." << '\n' << std::endl;

    while (randomNumber != input) {
        //taking the input
        std::cout << "Enter your guess: ";
        std::cin >> input ;
        inputCount++;

        if (input > randomNumber) {
            std::cout << "Too high!" << '\n' << std::endl;
        }
             
        else if (input < randomNumber) {
            std::cout << "Too low!" << '\n' << std::endl;
        }  
    
        if (input == randomNumber) {
            std::cout << "Correct!" << '\n' << std::endl;
            std::cout << "You got it in " << inputCount << " attempts" << '\n' << std::endl;
            std::cout << "Do you want to play again (Y/n): ";
            std::cin >> playAgain ;
            inputCount = 0;

            if (playAgain == "y" || playAgain == "Y" || playAgain == "yes" || playAgain == "YES") {
                randomNumber = distrib(gen);
            }

            if (playAgain == "n" || playAgain == "N" || playAgain == "no" || playAgain == "NO") {
                std::cout << '\n' << "====================" << '\n' << "CLOSING THE PROGRAM" << '\n' << "====================" << '\n' << std::endl;
            }
               
            else if (playAgain != "y" && playAgain != "Y" && playAgain != "yes" && playAgain != "YES" ) {
                std::cout << "Didn't understood that: " << playAgain << '\n' << "====================" << '\n' << "CLOSING THE PROGRAM" << '\n' << "====================" << '\n' << std::endl;
            }   

   
        }
    }
}