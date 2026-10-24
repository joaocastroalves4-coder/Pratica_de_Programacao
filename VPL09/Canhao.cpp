#include "Canhao.hpp"

Canhao::Canhao(int id, double energia, double intensidade)
    : Defesa(id, energia), _intensidade(intensidade) {}

void Canhao::atacar(double &danoAcumulado) {
    if (getEnergia() < 5) return;  // custo = 5
    _consumirEnergia(5);
    danoAcumulado += _intensidade;
}

double Canhao::getIntensidade() const {
    return _intensidade;
}
