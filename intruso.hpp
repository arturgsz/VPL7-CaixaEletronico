#ifndef INTRUSO_H
#define INTRUSO_H

#include <string>
#include <vector>

class Intruso{
    /*Continue a implementação da classe Intruso*/
public:
    void set_senha_vazada(std::string vazou);
    std::string crack_senha();

private:
    std::vector<char> all_passwords;
};

#endif
