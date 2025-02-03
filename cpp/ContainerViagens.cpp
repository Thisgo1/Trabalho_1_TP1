#include "include\ContainerViagens.h"

void ContainerViagens::adicionarViagem(const Viagem& viagem) {
    viagens.push_back(viagem); // Adiciona a viagem ao container
}

std::vector<Viagem> ContainerViagens::listarViagens() const {
    return viagens; // Retorna a lista de viagens
}
