#ifndef ULOGINCL_FAKEDATA_H
#define ULOGINCL_FAKEDATA_H
#include <string>
#define USERS_COUNT 30

class FakeData {
public:
  // TODO encrypt decrypt password
  std::string users[USERS_COUNT];
  std::string passwords[USERS_COUNT];
  void create_users();
  void create_passwords();
};

#endif
