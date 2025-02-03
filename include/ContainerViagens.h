#ifndef CONTAINERVIAGENS_H
#define CONTAINERVIAGENS_H

#include "../include/entidades/Viagem.h"
#include <vector>
#include <string>

class ContainerViagens {
private:
    std::vector<Viagem> viagens; // Container para armazenar viagens

public:
    void adicionarViagem(const Viagem& viagem); // Método para adicionar uma viagem
    std::vector<Viagem> listarViagens() const;  // Método para listar todas as viagens
};

#endif // CONTAINERVIAGENS_H
