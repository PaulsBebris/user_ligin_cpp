#include "CreateFile.h"
#include "FakeData.h"

void CreateFile::create_file(const std::string &file_path, std::string data[USERS_COUNT]) {
  std::fstream fs;
  fs.open(file_path,std::ios_base::out);
  for(int i=0; i < USERS_COUNT; i++){
    fs << data[i] << std::endl;
  }
  fs.close();
}