#include "CanhaoOrbital.hpp"
#include <iostream>
using namespace std;

CanhaoOrbital::CanhaoOrbital(int id, double energia, double intensidade, double multiplicador)
    : Canhao(id, energia, intensidade), _multiplicadorGravitacional(multiplicador) {}

void CanhaoOrbital::atacar(double &danoAcumulado) {
    if (getEnergia() < 5) return;

    // chama pai para consumir energia e calcular dano base
    double danoAntes = danoAcumulado;
    Canhao::atacar(danoAcumulado);
    double danoBase = danoAcumulado - danoAntes;

    // substitui o dano base pelo dano multiplicado
    // remove o base que foi adicionado e coloca base*mult
    danoAcumulado = danoAntes + danoBase * _multiplicadorGravitacional;

    cout << "Ataque Orbital realizado!" << endl;
}
