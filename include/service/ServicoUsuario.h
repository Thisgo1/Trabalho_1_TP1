// ServicoUsuario.h
#ifndef SERVICOUSUARIO_H
#define SERVICOUSUARIO_H

#include "include/interfaces/apresentacao/InterfaceUsuario.h"
#include "include\interfaces\IServicoUsuario.h"
#include "include/ContainerUsuario.h"

class ServicoUsuario : public IServicoUsuario
{
private:
    ContainerUsuarios &containerUsuarios;

public:
    ServicoUsuario(ContainerUsuarios &container);
    bool criarUsuario(const std::string &usuario, const std::string &senha) override;
    Conta *buscarUsuario(const std::string &usuario) override;
    bool atualizarUsuario(const std::string &usuario, const std::string &novaSenha) override;
    bool excluirUsuario(const std::string &usuario) override;
    std::vector<std::string> listarUsuarios() override;
};

#endif
