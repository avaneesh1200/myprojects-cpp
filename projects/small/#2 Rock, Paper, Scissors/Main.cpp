// SPDX-License-Identifier: Apache-2.0
// Copyright (c) 2026 Avaneesh Shahi
// See the LICENSE file for more information on usage, reproduction and attribution



//------------------------------------------------------
// This project is a number guessing name
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

//Built on Zorin, which is an Ubuntu based Distibiution (distro)

#include <iostream>
#include <random>

int main() {
    std::string input;
    std::string output;
    int scoreI = 0;
    int scoreO = 0;
    char playAgain;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 3);
   

    std::cout << "==============================" << '\n' << "ROCK, PAPER, SCISSORS GAME" << '\n' << "==============================" << std::endl;
    std::cout << '\n' << "Score - You: " << scoreI << " | Computer: " << scoreO << '\n'<< std::endl;
    while (true) {
        int randomNumber = distrib(gen);
        if (randomNumber == 1) {
            output = "Rock";
        }
        else if (randomNumber == 2) {
            output = "Paper";
        }
        else if (randomNumber == 3) {
            output = "Scissors";
        }

        std::cout << "Choose: (1) Rock, (2) Paper, (3) Scissors: " ;
        std::cin >> input;

        if (output == "Rock" && (input == "1" || input == "ROCK" || input == "Rock" || input == "rock")) {
            std::cout << '\n' << "You choose: Rock" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "Draw" << '\n' << std::endl;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
        }
        else if (output == "Paper" && (input == "2" || input == "PAPER" || input == "Paper" || input == "paper")) {
            std::cout << "You choose: Paper " << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "Draw" << '\n' << std::endl;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
        }
        else if (output == "Scissors" && (input == "3" || input == "SCISSORS" || input == "Scissors" || input == "scissors")) {
            std::cout << "You choose: Scissors " << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "Draw" << '\n' << std::endl;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
        }
        else if (output == "Scissors" && (input == "1" || input == "ROCK" || input == "Rock" || input == "rock")) {
            std::cout << "You choose: Rock" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "🎉 You win this round! " << "Rock crushes " << output <<  '\n' << std::endl; 
            scoreI++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (output == "Rock" && (input == "2" || input == "PAPER" || input == "Paper" || input == "paper")) {
            std::cout << "You choose: Paper" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "🎉 You win this round! " << "Paper covers " << output <<  '\n' << std::endl;
            scoreI++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (output == "Paper" && (input == "3" || input == "SCISSORS" || input == "Scissors" || input == "scissors")) {
            std::cout << "You choose: Scissors" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "🎉 You win this round! " << "Scissors cuts " << output <<  '\n' << std::endl;
            scoreI++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (output == "Paper" && (input == "1" || input == "ROCK" || input == "Rock" || input == "rock")) {
            std::cout << "You choose: Rock" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "😞 You lose this round! " << output <<" covers Rock" <<  '\n' << std::endl;
            scoreO++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (output == "Scissors" && (input == "2" || input == "PAPER" || input == "Paper" || input == "paper")) {
            std::cout << "You choose: Paper" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "😞 You lose this round! " << output << " cuts Paper" <<  '\n' << std::endl;
            scoreO++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (output == "Rock" && (input == "3" || input == "SCISSORS" || input == "Scissors" || input == "scissors")) {
            std::cout << "You choose: Scissors" << std::endl;
            std::cout << "Computer choose: " << output << '\n' << std::endl;
            std::cout << "😞 You lose this round! " << output << " crushes Scissors" << '\n'<< std::endl;
            scoreO++;
            std::cout << "Score - You: " << scoreI << " | Computer: " << scoreO << std::endl;
            
        }
        else if (input != "1" || input != "2" || input != "3" || input != "ROCK" || input != "Rock" || input != "rock" || input != "PAPER" ||input != "Paper" || input != "paper" || input != "SCISSORS" || input != "Scissors" || input != "scissors") {
            std::cout << '\n' 
                      << "\033[1;31mInvalid Input! (\033[1;34m" << input << "\033[1;31m) Please enter a valid option.\033[0m\n" 
                      << std::endl;

        }

        if (std::is_same<decltype(scoreI), int>::value && std::is_same<decltype(scoreO), int>::value ) {
            std::cout << "Play another round? (Y/n): ";
            std::cin >> playAgain;
        }
        if (playAgain == 'N' || playAgain == 'n') {
             std::cout << "==============================" << '\n' << "CLOSING THE PROGRAM" << '\n' << "==============================" << std::endl;
             break;
        }
        if (playAgain == 'Y' || playAgain == 'y') {
            std::cout << "==============================" << '\n' << "Starting a new round..." << '\n' << "==============================" << std::endl;
        }
        else {
            std::cout << "Didn't understood that: " << playAgain << '\n' << "==============================" << '\n' << "CLOSING THE PROGRAM" << '\n' <<"==============================" << std::endl;
            break;
        }
    }
}
