#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>
using namespace std;

class Jogador {
private:
    string nome;
    char simbolo;

public:
    Jogador(string nome, char simbolo);

    string getNome() const;
    char getSimbolo() const;
};

#endif