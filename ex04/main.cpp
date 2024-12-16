#include <iostream>
#include <string>
#include <fstream>

void replaceString(std::string& line, const std::string& str1, const std::string& str2) {
    size_t pos = 0;

    while ((pos = line.find(str1, pos)) != std::string::npos) {
        line = line.substr(0, pos) + str2 + line.substr(pos + str1.length());
        pos += str2.length();  // Move past the replaced part
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Please check your input! (program_name filename string1 string2)" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: Could not open source file " << argv[1] << std::endl;
        return 1;
    }
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: Could not create file " << filename << ".replace" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        replaceString(line, s1, s2);
        outFile << line << std::endl;
    }

    file.close();
    outFile.close();

    return 0;
}