#include "Robo.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Robo::Robo(int id, Ponto2D posicao, bool com_bola) {
    _id       = id;
    _posicao  = posicao;  // cópia na stack
    _com_bola = com_bola;
    _energia  = 100.0;
}

void Robo::mover(double v, double th, double t) {
    // decomposição vetorial: vx = v*cos(th), vy = v*sin(th)
    // equação cinemática: x = x0 + vx*t
    _posicao._x += v * cos(th) * t;
    _posicao._y += v * sin(th) * t;

    // distância percorrida = velocidade * tempo
    double distancia = v * t;
    _energia -= distancia;
}

double Robo::calcular_distancia(Robo* robo) {
    // reutiliza o método já implementado em Ponto2D
    return _posicao.calcular_distancia(&robo->_posicao);
}

Robo* Robo::determinar_robo_mais_proximo(Robo** time, int n) {
    Robo* mais_proximo = nullptr;
    double menor_dist  = -1.0;

    for (int i = 0; i < n; i++) {
        if (time[i]->_id == _id) continue; // ignora a si mesmo

        double dist = calcular_distancia(time[i]);
        if (menor_dist < 0 || dist < menor_dist) {
            menor_dist   = dist;
            mais_proximo = time[i];
        }
    }

    return mais_proximo;
}

void Robo::passar_bola(Robo** time, int n) {
    if (!_com_bola) {
        cout << "Estou sem a bola!" << endl;
        return;
    }

    Robo* alvo = determinar_robo_mais_proximo(time, n);
    if (alvo != nullptr) {
        _com_bola      = false;
        alvo->_com_bola = true;
    }
}

void Robo::imprimir_status() {
    cout << fixed << setprecision(2);
    cout << _id       << "\t"
         << _posicao._x << "\t"
         << _posicao._y << "\t"
         << _com_bola  << "\t"
         << _energia   << endl;
}
