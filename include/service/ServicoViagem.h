#ifndef SERVICOVIAGEM_H
#define SERVICOVIAGEM_H

#include "..\include\interfaces\IServicoViagem.h"
#include "include\ContainerViagens.h"

class ServicoViagem : public IServicoViagem {
private:
    ContainerViagens& containerViagens; // Referência ao container de viagens

public:
    ServicoViagem(ContainerViagens& container); // Construtor que aceita ContainerViagens
    void criarViagem(const Codigo& codigo, const Nome& nome, const Avaliacao& avaliacao) override;
    std::vector<Viagem> listarViagens() const override;
};

#endif // SERVICOVIAGEM_H
