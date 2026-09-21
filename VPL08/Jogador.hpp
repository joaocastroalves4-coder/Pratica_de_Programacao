#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>
using namespace std;

class Jogador {
private:
    string nome;
    char simbolo;

public:
    // Construtor: recebe nome e símbolo e os armazena internamente
    Jogador(string nome, char simbolo) : nome(nome), simbolo(simbolo) {}

    // Retorna o nome do jogador
    string getNome() const {
        return nome;
    }

    // Retorna o símbolo do jogador ('X' ou 'O')
    char getSimbolo() const {
        return simbolo;
    }
};

#endif 