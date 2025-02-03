#include "../include/interfaces/apresentacao/InterfaceUsuario.h"
#include <iostream>

InterfaceUsuario::InterfaceUsuario(ControladorAutenticacao* auth, ControladorViagem* viagem)
    : controladorAutenticacao(auth), controladorViagem(viagem) {}

void InterfaceUsuario::mostrarMenu() {
    int opcao;
    do {
        std::cout << "\n1. Autenticar\n2. Criar Conta\n3. Gerenciar Viagens\n0. Sair\nEscolha: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: autenticarUsuario(); break;
            case 2: criarContaUsuario(); break;
            case 3: gerenciarViagens(); break;
            case 0: std::cout << "Saindo...\n"; break;
            default: std::cout << "Opção inválida!\n";
        }
    } while (opcao != 0);
}

void InterfaceUsuario::autenticarUsuario() {
    std::string usuario, senha;
    std::cout << "Usuário: ";
    std::cin >> usuario;
    std::cout << "Senha: ";
    std::cin >> senha;

    if (controladorAutenticacao->autenticar(usuario, senha)) {
        std::cout << "Autenticação bem-sucedida!\n";
    } else {
        std::cout << "Usuário ou senha incorretos.\n";
    }
}

void InterfaceUsuario::criarContaUsuario() {
    std::string usuario, senha;
    std::cout << "Novo Usuário: ";
    std::cin >> usuario;
    std::cout << "Senha: ";
    std::cin >> senha;

    if (controladorAutenticacao->criarConta(usuario, senha)) {
        std::cout << "Conta criada com sucesso!\n";
    } else {
        std::cout << "Falha ao criar conta.\n";
    }
}

void InterfaceUsuario::gerenciarViagens() {
    // Implemente a lógica para gerenciar viagens
    std::cout << "Gerenciamento de viagens.\n";
}
