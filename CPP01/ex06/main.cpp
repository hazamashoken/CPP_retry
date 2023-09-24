#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv) {

  if (argc != 2) {
    return 1;
  }
  int i = 0;
  std::string levels[] = {"debug", "info", "warning", "error"};
  std::string level(argv[1]);
  std::string::iterator level_begin = level.begin();
  std::string::iterator level_end = level.end();
  while (level_begin != level_end) {
    *level_begin = std::tolower(*level_begin);
    level_begin++;
  }

  while (i < 4) {
    if (level == levels[i])
      break;
    i++;
  }
  Harl harl;
  switch(i) {
    case 0:
      std::cout << "[DEBUG]" << std::endl;
      harl.complain("debug");
      std::cout << std::endl;
      // fall through
    case 1:
      std::cout << "[INFO]" << std::endl;
      harl.complain("info");
      std::cout << std::endl;
      // fall through
    case 2:
      std::cout << "[WARNING]" << std::endl;
      harl.complain("warning");
      std::cout << std::endl;
      // fall through
    case 3:
      std::cout << "[ERROR]" << std::endl;
      harl.complain("error");
      std::cout << std::endl;
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
  }

  return 0;
}