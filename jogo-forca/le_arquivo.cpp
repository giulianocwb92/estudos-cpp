#include <iostream>
#include <map>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"

std::vector<std::string> le_arquivo()
{

    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if (arquivo.is_open())
    {

        int quantidade_de_palavras;
        arquivo >> quantidade_de_palavras;

        std::vector<std::string> palavras_do_arquivo;

        for (int i = 0; i < quantidade_de_palavras; i++)
        {
            std::string palavra_lida;
            arquivo >> palavra_lida;

            palavras_do_arquivo.push_back(palavra_lida);
        }

        arquivo.close();

        return palavras_do_arquivo;

    }

    else{

        std::cout << "Nao foi possivel acessar o arquivo" << std::endl;
        exit(0);

    }

}