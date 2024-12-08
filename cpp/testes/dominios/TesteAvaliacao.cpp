#include "../include/testes/dominios/TesteAvaliacao.h"
#include <stdexcept>

/// @brief Declaração de valores válidos para avaliação.
const int TesteAvaliacao::VALOR_VALIDO = 5;
const int TesteAvaliacao::VALOR_INVALIDO = 6;

void TesteAvaliacao::Executar()
/// @brief Método que cria uma instância do dominio de Avaliação, e cria uma variável para controle dos testes.
{
  avaliacao = new Avaliacao();
  status = SUCESSO;
}
/// @brief Método que exclui a instância do dominio de Avaliação.
void TesteAvaliacao::Excluir()
{
  delete avaliacao;
}

/// @brief Método que testa a validação do domínio de Avaliação, usando try e catch para verificar se o valor passado é válido.
void TesteAvaliacao::Sucesso()
{
  try
  {
    avaliacao->setAvaliacao(VALOR_VALIDO);
    if (avaliacao->getAvaliacao() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Avaliação, usando try e catch para verificar se o valor passado é inválido.
void TesteAvaliacao::Falha()
{
  try
  {
    avaliacao->setAvaliacao(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Avaliação.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteAvaliacao::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
