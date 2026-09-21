#include "Partida.hpp"
#include <iostream>
using namespace std;

// Construtor: inicializa os jogadores e define quem começa
Partida::Partida(Jogador jogador1, Jogador jogador2)
    : jogador1(jogador1), jogador2(jogador2) {
    atual = &this->jogador1;
}

// Retorna referência para o jogador da vez
Jogador& Partida::getJogadorAtual() {
    return *atual;
}

// Executa a jogada do jogador atual
void Partida::executarJogada(int linha, int coluna) {
    char simbolo = atual->getSimbolo();

    if (tabuleiro.validaJogada(linha, coluna, simbolo)) {
        tabuleiro.fazerJogada(linha, coluna, simbolo);

        // alterna a vez para o outro jogador
        if (atual == &jogador1) {
            atual = &jogador2;
        } else {
            atual = &jogador1;
        }
    } else {
        cout << "Jogada invalida!\n";
    
    }
}

// Retorna o estado atual da partida
char Partida::statusPartida() {
    return tabuleiro.verificarEstadoPartida();
}

// Exibe o tabuleiro
void Partida::exibirPartida() {
    tabuleiro.imprimir();
} 