#include "../include/service/ServicoViagem.h"
#include <iostream>

ServicoViagem::ServicoViagem(ContainerViagens& container)
    : containerViagens(container) {}

void ServicoViagem::criarViagem(const Codigo& codigo, const Nome& nome, const Avaliacao& avaliacao) {
    Viagem novaViagem(codigo, nome, avaliacao); // Cria uma nova viagem
    containerViagens.adicionarViagem(novaViagem); // Adiciona a viagem ao container
    containerViagens.adicionarViagem(novaViagem);
    std::cout << "Viagem criada com sucesso!\n";
}

std::vector<Viagem> ServicoViagem::listarViagens() const {
    return containerViagens.listarViagens(); // Retorna a lista de viagens
}
