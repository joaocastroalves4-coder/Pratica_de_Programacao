#include "BaseMilitar.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

BaseMilitar::BaseMilitar() : _qtdAtual(0) {}

BaseMilitar::~BaseMilitar() {
    for (int i = 0; i < _qtdAtual; i++) {
        delete _defesas[i];
    }
}

void BaseMilitar::adicionarDefesa(Defesa* d) {
    _defesas[_qtdAtual++] = d;
}

void BaseMilitar::defender(double &saudeInimigo) {
    double danoAcumulado = 0;

    for (int i = 0; i < _qtdAtual; i++) {
        _defesas[i]->atacar(danoAcumulado);
    }

    saudeInimigo -= danoAcumulado;
    if (saudeInimigo < 0) saudeInimigo = 0;

    cout << fixed << setprecision(2);
    cout << "Saude Inimigo: " << saudeInimigo << endl;
}
