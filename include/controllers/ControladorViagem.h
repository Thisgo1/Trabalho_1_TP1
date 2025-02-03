// ControladorViagem.h
#ifndef CONTROLADORVIAGEM_H
#define CONTROLADORVIAGEM_H

#include "include\interfaces\IServicoViagem.h"

class ControladorViagem {
private:
    IServicoViagem* servicoViagem;

public:
    ControladorViagem(IServicoViagem* servico);
    void criarViagem(const std::string& usuario, int codigo, const std::string& nome, const std::string& avaliacao);
    std::vector<Viagem> listarViagens(const std::string& usuario);
};

#endif
