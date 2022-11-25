#include <iostream>
#include "./src/CreateFile.h"

int main() {
  std::cout << "CPP is so cool ... " << std::endl;
  std::string file_path = "../users/users.txt";
  CreateFile::create_file(file_path);












  return 0;
}
