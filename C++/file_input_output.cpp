#include <iostream>
#include <fstream>
int main() {
    std::ofstream file("output.txt");
    file << "Writing to a file" << std::endl;
    file.close();
    std::cout << "Data written to file." << std::endl;
    return 0;
}
