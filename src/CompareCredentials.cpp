#include "CompareCredentials.h"
#include <iostream>
#include <string>
#include <fstream>

bool CompareCredentials::compare_pswd(std::string user_in, std::string pswd) const {
  return user_in == pswd;
}

void CompareCredentials::create_msg(const std::string &str) {
  CompareCredentials::compare_msg = str;
}


bool CompareCredentials::compare_uname(std::string user_in) {
  // read from file
  std::string saved_pswd=" ";
  std::fstream fs;
  fs.open("../users/users.txt",std::ios_base::in);
  std::string l=" ";
  if(fs.is_open()){
    CompareCredentials::create_msg("unknown username");
    while(getline(fs,l)){
      if(l==user_in){
        CompareCredentials::create_msg("Welcome");
        break;
      }
    }
  }
  return CompareCredentials::compare_msg == "Welcome";
}

