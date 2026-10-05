// SPDX-License-Identifier: Apache-2.0
// Copyright (c) 2026 Avaneesh Shahi
// See the LICENSE file for more information on usage, reproduction and attribution



//------------------------------------------------------
// This project is a number guessing name 1 - A number guessing game
// no gui - terminal based
//------------------------------------------------


/*
* built using →
* C:\Users\avane>g++ --version
* g++ (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r1) 16.2.0
* Copyright (C) 2026 Free Software Foundation, Inc.
* T his is free software; see the source for copying conditions.  There is NO
* warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
*/

#include <iostream>

//variables
int a;
int b;
//

int main() {
    std::string name = "Avaneesh";

    for (int i = 0; i < 10; ++i) {
        std::cout << name << '\n';
    }
}