// ServicoAutenticacao.cpp
#include "../include/service/ServicoAutenticacao.h"
#include "../include/dominios/Codigo.h"
#include "../include/dominios/Senha.h"
#include <iostream>

ServicoAutenticacao::ServicoAutenticacao(ContainerUsuarios& container)
    : containerUsuarios(container) {}

bool ServicoAutenticacao::autenticar(const std::string& usuario, const std::string& senha) {
    Codigo codigo(usuario); // Cria um objeto Codigo a partir da string
    Senha senhaObj(senha);  // Cria um objeto Senha a partir da string

    Conta* conta = containerUsuarios.buscarUsuario(codigo.getCodigo());
    if (conta && conta->getSenha().getSenha() == senhaObj.getSenha()) {
        std::cout << "Autenticação bem-sucedida!\n";
        return true;
    }
    std::cout << "Usuário ou senha incorretos.\n";
    return false;
}

bool ServicoAutenticacao::criarConta(const std::string& usuario, const std::string& senha) {
    Codigo codigo(usuario); // Cria um objeto Codigo a partir da string
    Senha senhaObj(senha);  // Cria um objeto Senha a partir da string

    if (containerUsuarios.buscarUsuario(codigo.getCodigo()) == nullptr) {
        Conta novaConta(codigo, senhaObj); // Cria uma nova Conta com Codigo e Senha
        containerUsuarios.adicionarUsuario(codigo.getCodigo(), novaConta);
        std::cout << "Conta criada com sucesso!\n";
        return true;
    }
    std::cout << "Usuário já existe.\n";
    return false;
}
