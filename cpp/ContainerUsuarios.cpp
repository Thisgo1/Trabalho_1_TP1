// ContainerUsuarios.cpp
#include "include\ContainerUsuario.h"
#include <iostream>

void ContainerUsuarios::adicionarUsuario(const std::string& usuario, const Conta& conta) {
    usuarios[usuario] = conta;
}

Conta* ContainerUsuarios::buscarUsuario(const std::string& usuario) {
    if (usuarios.find(usuario) != usuarios.end()) {
        return &usuarios[usuario];
    }
    return nullptr;
}

bool ContainerUsuarios::autenticarUsuario(const std::string& usuario, const std::string& senha) {
    Conta* conta = buscarUsuario(usuario);
    if (conta && conta->getSenha() == senha) { // Agora isso funciona, pois o operador == está definido
        std::cout << "Autenticação bem-sucedida!\n";
        return true;
    }
    std::cout << "Usuário ou senha incorretos.\n";
    return false;
}
