#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("textfile.txt"); // Open file in read mode
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) { // Read line by line
        std::cout << line << std::endl;
    }

    file.close(); // Close file
    return 0;
}
