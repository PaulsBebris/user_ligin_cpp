#include <iostream>
#include "FakeData.h"

void FakeData::create_users(){
  std::string fake_name_base = "user_";
  for(int i=0; i<USERS_COUNT; i++){
    FakeData::users[i] = fake_name_base + std::to_string(i);
  }
}

void FakeData::create_passwords(){
  std::string fake_pswd_base = "pswd_";
  for(int i=0; i<USERS_COUNT; i++){
    FakeData::passwords[i] = fake_pswd_base + std::to_string(i);
  }
}

