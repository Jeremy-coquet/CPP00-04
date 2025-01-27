#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string ft_replace(std::string line, const std::string& s1, const std::string& s2) {
    std::string newLine;
    size_t startPos = 0;
    size_t index;
    while ((index = line.find(s1, startPos)) != std::string::npos) {
        newLine += line.substr(startPos, index - startPos);
        newLine += s2;
        startPos = index + s1.length();
    }
    newLine += line.substr(startPos);
    return (newLine);
} 

int main (int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Usage " << av[0] << " <filename>, <s1>, <s2>" <<std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string newFilename = filename +  ".replace";
    
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "impossible to open file" << filename << std::endl;
        return (1);
    }

    std::ofstream outFile(newFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "impossible to create file" << newFilename << std::endl;
        inFile.close();
        return (1);
    }                
    
    const std::string s1 = av[2];
    const std::string s2 = av[3];

    std::string line;
    while (getline(inFile, line)) {
        outFile << ft_replace(line, s1, s2) << std::endl;
    }

    inFile.close();
    outFile.close();

    return (0);
}

