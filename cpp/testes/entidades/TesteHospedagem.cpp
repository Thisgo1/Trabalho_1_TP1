#include "../include/testes/entidades/TesteHospedagem.h"

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

const std::string TesteHospedagem::CODIGO_VALIDO = "ABC123";
const std::string TesteHospedagem::NOME_VALIDO = "SaoPaulo";
const double TesteHospedagem::DINHEIRO_VALIDO = 200.00;
const int TesteHospedagem::AVALIACAO_VALIDA = 3;

/// @brief Método que cria uma instância do dominio de Hospedagem, e cria uma variável para controle dos testes.
void TesteHospedagem::executar()
{
  hospedagem = new Hospedagem();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Hospedagem.
void TesteHospedagem::excluir()
{
  delete hospedagem;
}

/// @brief Método que testa a validação do domínio de Hospedagem, usando try e catch para verificar se o valor passado é válido.
void TesteHospedagem::testarSucesso()
{
  try
  {
    Codigo codigo(CODIGO_VALIDO);
    hospedagem->setCodigo(codigo);
    if (hospedagem->getCodigo().getCodigo() != CODIGO_VALIDO)
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
    hospedagem->setNome(nome);
    if (hospedagem->getNome().getNome() != NOME_VALIDO)
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
    Dinheiro dinheiro(DINHEIRO_VALIDO);
    hospedagem->setDinheiro(dinheiro);
    if (hospedagem->getDinheiro().getValor() != DINHEIRO_VALIDO)
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
    hospedagem->setAvaliacao(avaliacao);
    if (hospedagem->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
    {
      status = FALHA;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }
}

/// @brief Método que executa os testes do domínio de Hospedagem.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteHospedagem::run()
{
  executar();
  testarSucesso();
  excluir();
  return status;
}
