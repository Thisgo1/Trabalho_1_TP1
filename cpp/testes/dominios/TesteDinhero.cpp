#include "../include/testes/dominios/TesteDinheiro.h"
#include <stdexcept>

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

/// @brief Declaração de valores válidos para dinheiro.
const double TesteDinheiro::VALOR_VALIDO = 100.00;
const double TesteDinheiro::VALOR_INVALIDO = -1000.00;

/// @brief Método que cria uma instância do dominio de Dinheiro, e cria uma variável para controle dos testes.
void TesteDinheiro::Executar()
{
  dinheiro = new Dinheiro();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Dinheiro.
void TesteDinheiro::Excluir()
{
  delete dinheiro;
}

/// @brief  Método que testa a validação do domínio de Dinheiro, usando try e catch para verificar se o valor passado é válido.
void TesteDinheiro::Sucesso()
{
  try
  {
    dinheiro->setValor(VALOR_VALIDO);
    if (dinheiro->getValor() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Dinheiro, usando try e catch para verificar se o valor passado é inválido.
void TesteDinheiro::Falha()
{
  try
  {
    dinheiro->setValor(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Dinheiro.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteDinheiro::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
