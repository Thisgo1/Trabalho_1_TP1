#include "../include/testes/dominios/TesteCodigo.h"
#include <stdexcept>

/// @brief Declaração de valores válidos para código.
const std::string TesteCodigo::VALOR_VALIDO = "AvC312";
const std::string TesteCodigo::VALOR_INVALIDO = "12";

/// @brief Método que cria uma instância do dominio de Código, e cria uma variável para controle dos testes.
void TesteCodigo::Executar()
{
  codigo = new Codigo();
  status = SUCESSO;
}

/// @brief  Método que exclui a instância do dominio de Código.
void TesteCodigo::Excluir()
{
  delete codigo;
}

/// @brief Método que testa a validação do domínio de Código, usando try e catch para verificar se o valor passado é válido.
void TesteCodigo::Sucesso()
{
  try
  {
    codigo->setValor(VALOR_VALIDO);
    if (codigo->getCodigo() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }

  try
  {
    codigo->setValor(VALOR_VALIDO);
    if (codigo->getCodigo() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Código, usando try e catch para verificar se o valor passado é inválido.
void TesteCodigo::Falha()
{
  try
  {
    codigo->setValor(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief  Método que executa os testes do domínio de Código.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteCodigo::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
