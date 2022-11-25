#include <iostream>
#include "FakeData.h"

FakeData::FakeData(const int users_count){
  std::string fake_name_base = "user_";
  for(int i=0; i<USERS_COUNT; i++){
    FakeData::users[i] = fake_name_base + std::to_string(i);
  }
}
