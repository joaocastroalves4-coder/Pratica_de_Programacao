#ifndef ROBO_HPP
#define ROBO_HPP

#include "Ponto2D.hpp"

struct Robo {
    int _id;
    Ponto2D _posicao;   // na stack, sem ponteiro
    bool _com_bola;
    double _energia;

    Robo(int id, Ponto2D posicao, bool com_bola);

    void mover(double v, double th, double t);
    double calcular_distancia(Robo* robo);
    Robo* determinar_robo_mais_proximo(Robo** time, int n);
    void passar_bola(Robo** time, int n);
    void imprimir_status();
};

#endif