#include "../include/testes/dominios/TesteDuracao.h"
#include <stdexcept>

/// @brief Declaração de valores válidos para duração.
const int TesteDuracao::VALOR_VALIDO = 120;
const int TesteDuracao::VALOR_INVALIDO = 361;

/// @brief Método que cria uma instância do dominio de Duração, e cria uma variável para controle dos testes.
void TesteDuracao::Executar()
{
  duracao = new Duracao();
  status = SUCESSO;
}

/// @brief  Método que exclui a instância do dominio de Duração.
void TesteDuracao::Excluir()
{
  delete duracao;
}

/// @brief Método que testa a validação do domínio de Duração, usando try e catch para verificar se o valor passado é válido.
void TesteDuracao::Sucesso()
{
  try
  {
    duracao->setDuracao(VALOR_VALIDO);
    if (duracao->getDuracao() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Duração, usando try e catch para verificar se o valor passado é inválido.
void TesteDuracao::Falha()
{
  try
  {
    duracao->setDuracao(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Duração.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteDuracao::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
