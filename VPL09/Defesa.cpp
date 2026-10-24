#include "Defesa.hpp"
#include <iostream>
using namespace std;

Defesa::Defesa(int id, double energia) : _id(id), _energia(energia) {}

Defesa::~Defesa() {
    cout << "Defesa " << _id << " desativada." << endl;
}

void Defesa::_consumirEnergia(double qtd) {
    _energia -= qtd;
    if (_energia < 0) _energia = 0;
}

double Defesa::getEnergia() const {
    return _energia;
}

int Defesa::getId() const {
    return _id;
}
