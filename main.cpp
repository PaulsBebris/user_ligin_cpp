#include <iostream>
#include "./src/CreateFile.h"
#include "./src/ParseUserInput.h"
#include "./src/CompareCredentials.h"
#include "./src/FakeData.h"

int main() {
  FakeData fd = FakeData();
  fd.create_users();
  fd.create_passwords();
  CreateFile::create_file("../users/users.txt", fd.users);
  CreateFile::create_file("../users/passwords.txt",fd.passwords);

  ParseUserInput p_u_input = ParseUserInput();
  p_u_input.create_user_input("Enter username");
  p_u_input.get_user_text_input();
  CompareCredentials comp_cred = CompareCredentials();
  comp_cred.compare_uname(p_u_input.user_input);
  std::cout << comp_cred.compare_msg << std::endl;
}
