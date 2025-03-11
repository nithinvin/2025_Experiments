#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string file_path = "/mnt/g/Nithin/GPU_Logs_20250311.txt"; 
    std::ifstream file(file_path);

    if (!file) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}

