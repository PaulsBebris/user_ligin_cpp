#include <iostream>
#include "./src/CreateFile.h"
#include "./src/ParseUserInput.h"
#include "./src/CompareCredentials.h"
#include "./src/FakeData.h"

int main() {
  FakeData fd = FakeData();
  fd.create_users();
  CreateFile::create_file("../users/users.txt", fd.users);
  fd.create_passwords();
  CreateFile::create_file("../users/passwords.txt",fd.passwords);

  bool run=true;
  bool uname = false;
  bool passwd = false;
  while(run){
    ParseUserInput p_u_input = ParseUserInput();
    CompareCredentials comp_cred = CompareCredentials();
    // exit loop
    if(p_u_input.user_input == "0") run = false;
    // check uname
    while(!uname && !passwd){
      p_u_input.create_user_input("Enter username");
      p_u_input.get_user_text_input();
      comp_cred.compare_uname(p_u_input.user_input);
      std::cout << comp_cred.compare_msg << std::endl;
      if(comp_cred.compare_msg=="Welcome"){
        uname=true;
      }
    }
    while(uname && !passwd){
      p_u_input.create_user_input("Enter password");
      p_u_input.get_user_text_input();
      comp_cred.compare_pswd(p_u_input.user_input);
      std::cout << comp_cred.compare_msg << std::endl;
      if(comp_cred.compare_msg=="Logged in"){
        passwd=true;
      }
    }
    return 0;
  }
}
