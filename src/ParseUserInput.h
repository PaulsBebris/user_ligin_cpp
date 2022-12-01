#ifndef ULOGINCL_PARSEUSERINPUT_H
#define ULOGINCL_PARSEUSERINPUT_H
#include <string>

#define UNAME_LEN 50

// TODO restructure class to protected members
class ParseUserInput {
protected:
public:
    std::string user_input;
    void create_user_input(std::string msg);
    std::string get_user_text_input() const;
};

#endif
