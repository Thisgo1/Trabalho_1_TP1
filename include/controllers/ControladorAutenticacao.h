// ControladorAutenticacao.h
#ifndef CONTROLADORAUTENTICACAO_H
#define CONTROLADORAUTENTICACAO_H

#include "include\interfaces\IServicoAutenticacao.h"

class ControladorAutenticacao {
private:
    IServicoAutenticacao* servicoAutenticacao;

public:
    ControladorAutenticacao(IServicoAutenticacao* servico);
    bool autenticar(const std::string& usuario, const std::string& senha);
    bool criarConta(const std::string& usuario, const std::string& senha);
};

#endif
