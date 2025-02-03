// ControladorAutenticacao.cpp
#include "include\controllers\ControladorAutenticacao.h"

ControladorAutenticacao::ControladorAutenticacao(IServicoAutenticacao* servico)
    : servicoAutenticacao(servico) {}

bool ControladorAutenticacao::autenticar(const std::string& usuario, const std::string& senha) {
    return servicoAutenticacao->autenticar(usuario, senha);
}

bool ControladorAutenticacao::criarConta(const std::string& usuario, const std::string& senha) {
    return servicoAutenticacao->criarConta(usuario, senha);
}
