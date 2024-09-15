#include <string>
#include "letra_existe.hpp"

extern std::string palavra_secreta;

bool letra_existe(char c)
{

    for (char i : palavra_secreta)
    {
        if (c == i)
        {
            return true;
        }
    }

    return false;
}
