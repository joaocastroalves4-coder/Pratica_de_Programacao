#include "Ponto2D.hpp"
#include <cmath>

Ponto2D::Ponto2D(double x, double y) {
    _x = x;
    _y = y;
}

double Ponto2D::calcular_distancia(Ponto2D* ponto) {
    double dx = _x - ponto->_x;
    double dy = _y - ponto->_y;
    return sqrt(dx*dx + dy*dy);
}