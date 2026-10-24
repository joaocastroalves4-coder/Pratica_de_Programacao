#include <iostream>
#include "BaseMilitar.hpp"
#include "Canhao.hpp"
#include "CanhaoOrbital.hpp"
#include "LancadorMissil.hpp"
using namespace std;

int main() {
    BaseMilitar base;
    char cmd;

    while (cin >> cmd) {
        if (cmd == 'c') {
            int id; double energia, intensidade;
            cin >> id >> energia >> intensidade;
            base.adicionarDefesa(new Canhao(id, energia, intensidade));

        } else if (cmd == 'o') {
            int id; double energia, intensidade, gravidade;
            cin >> id >> energia >> intensidade >> gravidade;
            base.adicionarDefesa(new CanhaoOrbital(id, energia, intensidade, gravidade));

        } else if (cmd == 'm') {
            int id, misseis; double energia;
            cin >> id >> energia >> misseis;
            base.adicionarDefesa(new LancadorMissil(id, energia, misseis));

        } else if (cmd == 'd') {
            double vida;
            cin >> vida;
            base.defender(vida);

        } else if (cmd == 's') {
            break;
        }
    }

    return 0;
}