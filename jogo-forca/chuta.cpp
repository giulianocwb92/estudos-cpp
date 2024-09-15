#include <iostream>
#include <map>
#include <vector>
#include "letra_existe.hpp"
#include "chuta.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chuta()
{

    char chute;
    std::cout << "Digite um chute: ";
    std::cin >> chute;

    chutou[chute] = true;

    if (letra_existe(chute))
    {

        std::cout << "Seu chute esta na palavra!" << std::endl;
    }
    else
    {

        std::cout << "Seu chute nao esta na palavra!" << std::endl;
        chutes_errados.push_back(chute);
    }

    std::cout << std::endl;
}