// ContainerUsuarios.h
#ifndef CONTAINERUSUARIOS_H
#define CONTAINERUSUARIOS_H

#include "include\entidades\Conta.h"
#include <map>
#include <string>

class ContainerUsuarios {
private:
    std::map<std::string, Conta> usuarios; // Mapa de usuários

public:
    void adicionarUsuario(const std::string& usuario, const Conta& conta);
    Conta* buscarUsuario(const std::string& usuario);
    bool autenticarUsuario(const std::string& usuario, const std::string& senha);
};

#endif
