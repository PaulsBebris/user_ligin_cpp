cmake_minimum_required(VERSION 3.23)
project(ulogincl)

set(CMAKE_CXX_STANDARD 14)

add_executable(ulogincl main.cpp src/CreateFile.cpp src/CreateFile.h src/FakeData.cpp src/FakeData.h src/ParseUserInput.cpp src/ParseUserInput.h src/CheckUsername.cpp src/CheckUsername.h src/CompareCredentials.cpp src/CompareCredentials.h)
