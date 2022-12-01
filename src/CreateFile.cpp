#include "CreateFile.h"
#include "FakeData.h"

void CreateFile::create_file(const std::string &file_path) {
  FakeData fakeData = FakeData(30);
  std::fstream fs;
  fs.open(file_path,std::ios_base::out);
  for(const auto &i : fakeData.users){
    fs << i << std::endl;
  }
  fs.close();
}