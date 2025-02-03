#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H

#include "../../controllers/ControladorAutenticacao.h"
#include "../../controllers/ControladorViagem.h" // Inclua o cabeçalho de ControladorViagem

class InterfaceUsuario {
private:
    ControladorAutenticacao* controladorAutenticacao;
    ControladorViagem* controladorViagem;

public:
    InterfaceUsuario(ControladorAutenticacao* auth, ControladorViagem* viagem);
    void mostrarMenu();
    void autenticarUsuario();
    void criarContaUsuario();
    void gerenciarViagens();
};

#endif // INTERFACEUSUARIO_H
