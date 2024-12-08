#include "../include/testes/entidades/TesteViagem.h"


/// @brief Declaração de valores válidos para viagem.

const std::string TesteViagem::CODIGO_VALIDO = "ABC123";
const std::string TesteViagem::NOME_VALIDO = "SaoPaulo";
const int TesteViagem::AVALIACAO_VALIDA = 3;

/// @brief Método que cria uma instância do dominio de Viagem, e cria uma variável para controle dos testes.
void TesteViagem::executar()
{
  viagem = new Viagem();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Viagem.
void TesteViagem::excluir()
{
  delete viagem;
}

/// @brief Método que testa a validação do domínio de Viagem, usando try e catch para verificar se o valor passado é válido.
void TesteViagem::testarSucesso()
{
  try
  {
    if (viagem->getCodigo().getCodigo() == CODIGO_VALIDO)
    {
      status = SUCESSO;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }

  try
  {
    if (viagem->getNome().getNome() == NOME_VALIDO)
    {
      status = SUCESSO;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }

  try
  {
    if (viagem->getAvaliacao().getAvaliacao() == AVALIACAO_VALIDA)
    {
      status = SUCESSO;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }
}

/// @brief Método que executa os testes do domínio de Viagem.
int TesteViagem::run()
{
  executar();
  testarSucesso();
  excluir();
  return status;
}
