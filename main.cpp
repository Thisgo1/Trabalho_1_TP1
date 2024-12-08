///@mainpage Sistema de Agência de Viagens
///
///@section intro_sec Introdução
/// Esse projeto visa implementar uma biblioteca de classes para um sistema de agência de viagens.
/// O sistema é composto por classes de domínio e entidades, que são responsáveis por armazenar e manipular informações sobre viagens, atividades, destinos, hospedagens e contas.
///@section creditos_sec Créditos do Projeto
/// Thiago Silva Ribeiro - 202037702.

#include <iostream>

// Teste unitarios de dominios
#include "include\testes\dominios\TesteAvaliacao.h"
#include "include\testes\dominios\TesteCodigo.h"
#include "include\testes\dominios\TesteSenha.h"
#include "include\testes\dominios\TesteData.h"
#include "include\testes\dominios\TesteNome.h"
#include "include\testes\dominios\TesteDinheiro.h"
#include "include\testes\dominios\TesteHorario.h"
#include "include\testes\dominios\TesteDuracao.h"

// Teste unitarios de entidades
#include "include\testes\entidades\TesteConta.h"
#include "include\testes\entidades\TesteAtividade.h"
#include "include\testes\entidades\TesteHospedagem.h"
#include "include\testes\entidades\TesteDestino.h"
#include "include\testes\entidades\TesteViagem.h"

/// @brief Função principal que executa os testes unitários dos domínios e entidades .

int main()
{
    // Teste unitarios implementados com switch case para verificar se o teste foi bem sucedido ou não.
    TesteAvaliacao testeAvaliacao;
    switch (testeAvaliacao.run())
    {
    case testeAvaliacao.SUCESSO:
        std::cout << "SUCESSO - AVALIACAO" << std::endl;
        break;
    case testeAvaliacao.FALHA:
        std::cout << "FALHA - AVALIACAO" << std::endl;
        break;
    }

    TesteCodigo testeCodigo;
    switch (testeCodigo.run())
    {
    case testeCodigo.SUCESSO:
        std::cout << "SUCESSO - CODIGO " << std::endl;
        break;
    case testeCodigo.FALHA:
        std::cout << "FALHA - CODIGO" << std::endl;
        break;
    }

    TesteSenha testeSenha;
    switch (testeSenha.run())
    {
    case testeSenha.SUCESSO:
        std::cout << "SUCESSO - SENHA" << std::endl;
        break;
    case testeSenha.FALHA:
        std::cout << "FALHA - SENHA" << std::endl;
        break;
    }

    TesteData testeData;
    switch (testeData.run())
    {
    case testeData.SUCESSO:
        std::cout << "SUCESSO - DATA" << std::endl;
        break;
    case testeData.FALHA:
        std::cout << "FALHA - DATA" << std::endl;
        break;
    }

    TesteNome testeNome;
    switch (testeNome.run())
    {
    case testeNome.SUCESSO:
        std::cout << "SUCESSO - NOME" << std::endl;
        break;
    case testeNome.FALHA:
        std::cout << "FALHA - NOME" << std::endl;
        break;
    }

    TesteDinheiro testeDinheiro;
    switch (testeDinheiro.run())
    {
    case testeDinheiro.SUCESSO:
        std::cout << "SUCESSO - DINHEIRO" << std::endl;
        break;
    case testeDinheiro.FALHA:
        std::cout << "FALHA - DINHEIRO" << std::endl;
        break;
    }

    TesteHorario testeHorario;
    switch (testeHorario.run())
    {
    case testeHorario.SUCESSO:
        std::cout << "SUCESSO - HORARIO" << std::endl;
        break;
    case testeHorario.FALHA:
        std::cout << "FALHA - HORARIO" << std::endl;
        break;
    }

    TesteDuracao testeDuracao;
    switch (testeDuracao.run())
    {
    case testeDuracao.SUCESSO:
        std::cout << "SUCESSO - DURACAO" << std::endl;
        break;
    case testeDuracao.FALHA:
        std::cout << "FALHA - DURACAO" << std::endl;
        break;
    }

    TesteConta testeConta;
    switch (testeConta.run())
    {
    case testeConta.SUCESSO:
        std::cout << "SUCESSO - CONTA" << std::endl;
        break;
    case testeConta.FALHA:
        std::cout << "FALHA - CONTA" << std::endl;
        break;
    }

    TesteAtividade testeAtividade;
    switch (testeAtividade.run())
    {
    case testeAtividade.SUCESSO:
        std::cout << "SUCESSO - ATIVIDADE" << std::endl;
        break;
    case testeAtividade.FALHA:
        std::cout << "FALHA - ATIVIDADE" << std::endl;
        break;
    }

    TesteHospedagem testeHospedagem;
    switch (testeHospedagem.run())
    {
    case testeHospedagem.SUCESSO:
        std::cout << "SUCESSO - HOSPEDAGEM" << std::endl;
        break;
    case testeHospedagem.FALHA:
        std::cout << "FALHA - HOSPEDAGEM" << std::endl;
        break;
    }

    TesteDestino testeDestino;
    switch (testeDestino.run())
    {
    case testeDestino.SUCESSO:
        std::cout << "SUCESSO - DESTINO" << std::endl;
        break;
    case testeDestino.FALHA:
        std::cout << "FALHA - DESTINO" << std::endl;
        break;
    }

    TesteViagem testeViagem;
    switch (testeViagem.run())
    {
    case testeViagem.SUCESSO:
        std::cout << "SUCESSO - VIAGEM" << std::endl;
        break;
    case testeViagem.FALHA:
        std::cout << "FALHA - VIAGEM" << std::endl;
        break;
    }
    return 0;
}
