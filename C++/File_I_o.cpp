#include <iostream>
#include <fstream>
int main() {
    std::ofstream outfile("example.txt");
    outfile << "Writing to file" << std::endl;
    outfile.close();
    std::ifstream infile("example.txt");
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();
    return 0;
}
