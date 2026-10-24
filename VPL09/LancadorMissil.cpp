#include "LancadorMissil.hpp"

LancadorMissil::LancadorMissil(int id, double energia, int misseis)
    : Defesa(id, energia), _misseis(misseis) {}

void LancadorMissil::atacar(double &danoAcumulado) {
    if (_misseis == 0) return;       // sem mísseis
    if (getEnergia() < 5) return;    // energia insuficiente

    _misseis--;
    _consumirEnergia(5);
    danoAcumulado += 40;
}
