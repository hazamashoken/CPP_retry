#include <iostream>
#include <fstream>
#include "Sed.hpp"

int main(int argc, char** argv) {
  if (argc != 4) {
    std::cerr << "Error: Expect 3 parameters! (filename, s1, s2)" << std::endl;
    return 1;
  }

  std::string pathName = std::string(argv[1]);
  std::string str1 = std::string(argv[2]);
  std::string str2 = std::string(argv[3]);

  Sed sed(pathName);

  if (!sed.is_open()) {
    std::cerr << "Error: Invalid File" << std::endl;
    return 1;
  }

  sed.readfile();

  if (!sed.replace_strings(str1, str2)) {
    std::cerr << "Error: Bad string arguments" << std::endl;
    return 1;
  }

  if (!sed.output()) {
    std::cerr << "Error: Cannot output file" << std::endl;
    return 1;
  }

  return 0;
}