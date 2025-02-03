#ifndef STUBSERVICOAUTENTICACAO_H
#define STUBSERVICOAUTENTICACAO_H

#include "..\include\interfaces\IServicoAutenticacao.h"
#include "include\ContainerUsuario.h"

class StubServicoAutenticacao : public IServicoAutenticacao
{
private:
    ContainerUsuarios containerUsuarios; // Declare o container como membro da classe

public:
    StubServicoAutenticacao();
    bool autenticar(const std::string &usuario, const std::string &senha) override;
    bool criarConta(const std::string &usuario, const std::string &senha) override;
};

#endif // STUBSERVICOAUTENTICACAO_H
