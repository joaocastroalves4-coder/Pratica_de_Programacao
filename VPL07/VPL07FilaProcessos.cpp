#include "FilaProcessos.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

FilaProcessos::FilaProcessos() {
    _inicio = nullptr;
    _proximo_id = 1;
}

void FilaProcessos::adicionar_processo(string nome, int prioridade) {
    Processo* p = new Processo(_proximo_id++, nome, prioridade);
    No* novo = new No{p, nullptr};

    // inserir na posição correta (decrescente por prioridade, mantendo ordem de inserção)
    // acha a posição: após todos os de prioridade maior ou igual
    if (_inicio == nullptr || prioridade > _inicio->processo->getPrioridade()) {
        novo->proximo = _inicio;
        _inicio = novo;
        return;
    }

    No* atual = _inicio;
    while (atual->proximo != nullptr &&
           atual->proximo->processo->getPrioridade() >= prioridade) {
        atual = atual->proximo;
    }

    novo->proximo = atual->proximo;
    atual->proximo = novo;
}

Processo* FilaProcessos::remover_processo_maior_prioridade() {
    if (_inicio == nullptr) return nullptr;

    No* removido = _inicio;
    Processo* p = removido->processo;
    _inicio = _inicio->proximo;
    delete removido;
    return p;
}

Processo* FilaProcessos::remover_processo_por_id(int id) {
    if (_inicio == nullptr) return nullptr;

    // caso especial: primeiro da lista
    if (_inicio->processo->getID() == id) {
        return remover_processo_maior_prioridade();
    }

    No* atual = _inicio;
    while (atual->proximo != nullptr) {
        if (atual->proximo->processo->getID() == id) {
            No* removido = atual->proximo;
            Processo* p = removido->processo;
            atual->proximo = removido->proximo;
            delete removido;
            return p;
        }
        atual = atual->proximo;
    }

    return nullptr;
}

void FilaProcessos::estimativa_tempo_para_execucao(int id) {
    double tempo = 0.0;
    No* atual = _inicio;

    while (atual != nullptr) {
        if (atual->processo->getID() == id) {
            cout << fixed << setprecision(1);
            cout << "Tempo estimado para execução do processo "
                 << atual->processo->getNome()
                 << " (id=" << id << ") eh "
                 << tempo << " segundos." << "\n";
            return;
        }
        tempo += atual->processo->tempo_reservado_processo();
        atual = atual->proximo;
    }
}

void FilaProcessos::imprimir_fila() {
    No* atual = _inicio;
    while (atual != nullptr) {
        atual->processo->imprimir_dados();
        atual = atual->proximo;
    }
}