#ifndef ULOGINCL_FAKEDATA_H
#define ULOGINCL_FAKEDATA_H
#include <string>
#define USERS_COUNT 30

class FakeData {
public:
  std::string users[USERS_COUNT];
  explicit  FakeData(int users_count);
};

#endif
