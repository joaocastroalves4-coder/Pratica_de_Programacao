#include "Jogador.hpp"
using namespace std;

// Construtor: recebe nome e símbolo e os armazena internamente
Jogador::Jogador(string nome, char simbolo) : nome(nome), simbolo(simbolo) {}

// Retorna o nome do jogador
string Jogador::getNome() const {
    return nome;
}

// Retorna o símbolo do jogador ('X' ou 'O')
char Jogador::getSimbolo() const {
    return simbolo;
}