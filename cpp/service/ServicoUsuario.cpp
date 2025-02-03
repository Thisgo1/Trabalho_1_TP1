// ServicoUsuario.cpp
#include "include\service\ServicoUsuario.h"
#include <iostream>
#pragma once

ServicoUsuario::ServicoUsuario(ContainerUsuarios& container)
    : containerUsuarios(container) {}

bool ServicoUsuario::criarUsuario(const std::string& codigo, const std::string& senha) {
    if (containerUsuarios.buscarUsuario(codigo) == nullptr) {
        containerUsuarios.adicionarUsuario(codigo, Conta(Codigo(codigo), Senha(senha)));
        std::cout << "Usuário criado com sucesso!\n";
        return true;
    }
    std::cout << "Usuário já existe.\n";
    return false;
}

Conta* ServicoUsuario::buscarUsuario(const std::string& codigo) {
    return containerUsuarios.buscarUsuario(codigo);
}

bool ServicoUsuario::atualizarUsuario(const std::string& codigo, const std::string& novaSenha) {
    Conta* conta = containerUsuarios.buscarUsuario(codigo);
    if (conta) {
        *conta = Conta(Codigo(codigo), Senha(novaSenha));
        std::cout << "Usuário atualizado com sucesso!\n";
        return true;
    }
    std::cout << "Usuário não encontrado.\n";
    return false;
}

bool ServicoUsuario::excluirUsuario(const std::string& codigo) {
    // Implemente a lógica para excluir o usuário do container
    // (depende de como o container foi implementado).
    std::cout << "Usuário excluído com sucesso!\n";
    return true;
}

std::vector<std::string> ServicoUsuario::listarUsuarios() {
    // Implemente a lógica para listar os usuários.
    std::vector<std::string> usuarios;
    // Exemplo: Retornar uma lista de nomes de usuários.
    return usuarios;
}
