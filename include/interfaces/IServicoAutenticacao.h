#ifndef ISERVICOAUTENTICACAO_H
#define ISERVICOAUTENTICACAO_H

#include <string>

class IServicoAutenticacao {
public:
    virtual bool autenticar(const std::string& usuario, const std::string& senha) = 0;
    virtual bool criarConta(const std::string& usuario, const std::string& senha) = 0;
    virtual ~IServicoAutenticacao() = default;
};

#endif
