#include "../include/testes/dominios/TesteSenha.h"
#include <stdexcept>

/// @brief Declaração de valores válidos para senha.
const std::string TesteSenha::VALOR_VALIDO = "15976";
const std::string TesteSenha::VALOR_INVALIDO = "senha123";

/// @brief Método que cria uma instância do dominio de Senha, e cria uma variável para controle dos testes.
void TesteSenha::Executar()
{
  senha = new Senha();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Senha.
void TesteSenha::Excluir()
{
  delete senha;
}

/// @brief Método que testa a validação do domínio de Senha, usando try e catch para verificar se o valor passado é válido.
void TesteSenha::Sucesso()
{
  try
  {
    senha->setValor(VALOR_VALIDO);
    if (senha->getSenha() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Senha, usando try e catch para verificar se o valor passado é inválido.
void TesteSenha::Falha()
{
  try
  {
    senha->setValor(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Senha.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteSenha::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
