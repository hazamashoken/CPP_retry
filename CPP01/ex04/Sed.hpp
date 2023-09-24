#include <iostream>
#include <fstream>

class Sed {
  private:
    std::string data;
    std::string pathName;
    std::ifstream inputFile;
    std::ofstream outputFile;

  public:
    Sed(const std::string& pathName);
    ~Sed();

    bool is_open() const;
    void readfile();
    bool replace_strings(const std::string& str1, const std::string& str2);
    bool output();

};
