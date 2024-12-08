#include "../include/testes/entidades/TesteConta.h"

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

/// @brief  Declaração de valores válidos para código e senha.
const std::string TesteConta::CODIGO_VALIDO = "ABC123";
const std::string TesteConta::CODIGO_INVALIDO = "";
const std::string TesteConta::SENHA_INVALIDA = "11111111111111145132";
const std::string TesteConta::SENHA_VALIDA = "45132";

/// @brief Método que cria uma instância do dominio de Conta, e cria uma variável para controle dos testes.
void TesteConta::executar()
{
    conta = new Conta();
    status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Conta.
void TesteConta::excluir()
{
    delete conta;
}

/// @brief Método que testa a validação do domínio de Conta, usando try e catch para verificar se o valor passado é válido.
void TesteConta::testarSucesso()
{
    try
    {
        conta->setCodigo(CODIGO_VALIDO);
        if (conta->getCodigo().getCodigo() != CODIGO_VALIDO)
        {
            status = FALHA;
        }
    }
    catch (const std::invalid_argument &e)
    {
        status = FALHA;
    }

    try
    {
        Senha senha(SENHA_VALIDA);
        conta->setSenha(senha);
        if (conta->getSenha().getSenha() != SENHA_VALIDA)
        {
            status = FALHA;
        }
    }
    catch (const std::invalid_argument &e)
    {
        status = FALHA;
    }
}
/// @brief Método que executa os testes do domínio de Conta.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteConta::run()
{
    executar();
    testarSucesso();
    excluir();
    return status;
}
