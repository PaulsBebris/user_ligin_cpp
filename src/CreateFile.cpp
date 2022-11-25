#include "CreateFile.h"

void CreateFile::create_file(const std::string &file_path) {
  std::fstream fs;
  fs.open(file_path,std::ios_base::out);
  fs.close();
}