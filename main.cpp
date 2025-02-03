///@mainpage Sistema de Agência de Viagens
///
/// <h1> Introdução </h1>
/// Este projeto visa implementar uma biblioteca de classes para um sistema de agência de viagens. <br>
/// Neste primeiro momento temos implementadas as classes domínios e entidades, e seus testes unitários. <br>
/// O sistema é composto por classes de domínio e entidades, que são responsáveis por armazenar e manipular informações sobre:<br>
///
/// <h3> Entidades: </h3>
/// <ul>
///     <li>Viagem</li>
///     <li>Atividade</li>
///     <li>Hospedagem</li>
///     <li>Conta</li>
/// </ul>
///
/// <h3> Domínios: </h3>
/// <ul>
///     <li>Codigo</li>
///     <li>Avaliacao</li>
///     <li>Data</li>
///     <li>Duracao</li>
///     <li>Dinheiro</li>
///     <li>Nome</li>
///     <li>Senha</li>
///     <li>Horario</li>
/// </ul>
///
/// <h2> Créditos do Projeto </h2>
/// <h3> Thiago Silva Ribeiro - 202037702. </h3>

#include "include\interfaces\apresentacao\InterfaceUsuario.h"
#include "include\service\ServicoAutenticacao.h"
#include "include\service\ServicoViagem.h"
#include "include\ContainerUsuario.h"
#include "include\ContainerViagens.h"

#include "include\controllers\ControladorAutenticacao.h"
#include "include\controllers\ControladorViagem.h"
#include "include\service\ServicoAutenticacao.h"
#include "include\service\ServicoViagem.h"
#include "include\ContainerUsuario.h"
#include "include\ContainerViagens.h"

/**
 * @file main.cpp
 * @brief Ponto de entrada para a aplicação.
 *
 * Este arquivo contém a função principal que inicializa os containers,
 * serviços, controladores e a interface do usuário para a aplicação.
 */

/**
 * @brief Função principal da aplicação.
 *
 * Inicializa os containers para usuários e viagens, configura os serviços
 * de autenticação e de viagens, e cria os controladores correspondentes.
 * Finalmente, inicializa a interface do usuário e exibe o menu principal.
 *
 */
int main() {
    // Containers
    ContainerUsuarios containerUsuarios;
    ContainerViagens containerViagens;

    // Serviços
    ServicoAutenticacao servicoAuth(containerUsuarios);
    ServicoViagem servicoViagem(containerViagens);

    // Controladores
    ControladorAutenticacao controladorAuth(&servicoAuth);
    ControladorViagem controladorViagem(&servicoViagem);

    // Interface de usuário
    InterfaceUsuario interface(&controladorAuth, &controladorViagem);
    interface.mostrarMenu();

    return 0;
}
