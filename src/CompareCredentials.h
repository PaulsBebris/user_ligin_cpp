#ifndef ULOGINCL_COMPARECREDENTIALS_H
#define ULOGINCL_COMPARECREDENTIALS_H
#include <string>

class CompareCredentials {
public:
    bool pwsd;
    bool uname;
    std::string compare_msg;
    bool compare_pswd(std::string user_in, std::string pswd) const;
    bool compare_uname(std::string user_in);
    bool compare_pswd(std::string pswd_in);
    void create_msg(const std::string &str);
};


#endif
