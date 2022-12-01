#include <iostream>
#include "ParseUserInput.h"

void ParseUserInput::create_user_input(std::string msg) {
  std::cout << msg << std::endl;
  std::cin >> ParseUserInput::user_input;
}

std::string ParseUserInput::get_user_text_input() const {
//  TODO create regex filer for ascii characters a-z,A-Z
//  TODO user friendly error handling
  return ParseUserInput::user_input;
}