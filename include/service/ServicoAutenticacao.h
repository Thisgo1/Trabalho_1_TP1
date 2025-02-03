#ifndef SERVICOAUTENTICACAO_H
#define SERVICOAUTENTICACAO_H

#include "include\interfaces\IServicoAutenticacao.h"
#include "include\ContainerUsuario.h"

class ServicoAutenticacao : public IServicoAutenticacao {
private:
    ContainerUsuarios& containerUsuarios;

public:
    ServicoAutenticacao(ContainerUsuarios& container);
    bool autenticar(const std::string& codigo, const std::string& senha) override;
    bool criarConta(const std::string& codigo, const std::string& senha) override;
};

#endif
