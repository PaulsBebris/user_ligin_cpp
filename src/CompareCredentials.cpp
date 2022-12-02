#include "CompareCredentials.h"
#include <iostream>
#include <string>
#include <fstream>

void CompareCredentials::create_msg(const std::string &str) {
  CompareCredentials::compare_msg = str;
}

bool CompareCredentials::compare_uname(std::string user_in) {
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

// TODO optimize in one function with two parameters: file and comparable string
// TODO match password to exact user, so change line format and comparing function
bool CompareCredentials::compare_pswd(std::string pswd_in) {
  std::fstream fs;
  fs.open("../users/passwords.txt",std::ios_base::in);
  std::string l=" ";
  if(fs.is_open()){
    CompareCredentials::create_msg("wrong password");
    while(getline(fs,l)){
      if(l==pswd_in){
        CompareCredentials::create_msg("Logged in");
        break;
      }
    }
  }
  return CompareCredentials::compare_msg == "Logged in";
}

