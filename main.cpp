#include <iostream>
#include "./src/CreateFile.h"
#include "./src/ParseUserInput.h"

int main() {
  // CreateFile::create_file("../users/users.txt");
  ParseUserInput parse_user_input = ParseUserInput();
  parse_user_input.create_user_input("Enter username");

  std::cout <<  parse_user_input.get_user_text_input() << std::endl;

  return 0;
}
