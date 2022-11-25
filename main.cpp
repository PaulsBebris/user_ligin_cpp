#include <iostream>
#include "./src/CreateFile.h"


int main() {
  std::cout << "CPP is so cool ... " << std::endl;
  CreateFile::create_file("../users/users.txt");




  return 0;
}
