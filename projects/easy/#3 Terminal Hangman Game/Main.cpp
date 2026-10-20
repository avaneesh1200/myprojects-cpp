// ofstream - stream class to write on files
// ifstream - stream class to read from files
// fstream stream class to both read and write from/to files
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("words.txt");

    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }

    std::string firstLine;

    if (std::getline(file, firstLine)) {
        std::cout << firstLine << std::endl;
    }
    else {
        std::cout << "The file is empty." << std::endl;
    }
    return 0;
}
