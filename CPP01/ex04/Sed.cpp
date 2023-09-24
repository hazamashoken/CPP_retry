#include "Sed.hpp"

Sed::Sed(const std::string& pathName): data(""), pathName(pathName) {
  inputFile.open(pathName.c_str());
}

Sed::~Sed() {
  inputFile.close();
  outputFile.close();
};

bool Sed::is_open() const {
  return inputFile.is_open();
}

void Sed::readfile() {
  std::string line;
  while (std::getline(inputFile, line)) {
    data.append(line + "\n");
  }
}

bool  Sed::replace_strings(const std::string& str1, const std::string& str2) {
  if (str1.empty() || str1 == str2) {
    return false;
  }
  size_t pos = 0;
  std::string newData;
  while (((pos = data.find(str1, pos)) != std::string::npos))
  {
    newData = data.substr(0, pos);
    newData += str2;
    newData += data.substr(pos + str1.size());
    data = newData;
    pos += str2.size();
  }
  return true;
}

bool Sed::output() {
  outputFile.open((pathName + ".replace").c_str());
  if (!outputFile.is_open()) {
    return false;
  }
  outputFile << data;
  return true;
}

