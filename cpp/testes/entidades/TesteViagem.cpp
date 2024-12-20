#include "../include/testes/entidades/TesteViagem.h"

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

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
    Codigo codigo(CODIGO_VALIDO);
    viagem->setCodigo(codigo);
    if (viagem->getCodigo().getCodigo() != CODIGO_VALIDO)
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
    Nome nome(NOME_VALIDO);
    viagem->setNome(nome);
    if (viagem->getNome().getNome() != NOME_VALIDO)
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
    Avaliacao avaliacao(AVALIACAO_VALIDA);
    viagem->setAvaliacao(avaliacao);
    if (viagem->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
    {
      status = FALHA;
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
