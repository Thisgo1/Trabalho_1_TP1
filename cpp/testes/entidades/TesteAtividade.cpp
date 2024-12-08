#include "../include/testes/entidades/TesteAtividade.h"

/// @brief Declaração de valores válidos para atividade.
const std::string TesteAtividade::CODIGO_VALIDO = "rapel1";
const std::string TesteAtividade::NOME_VALIDO = "Rapel";
const std::string TesteAtividade::DATA_VALIDA = "08/12/2024";
const std::string TesteAtividade::HORARIO_VALIDO = "16:15";
const int TesteAtividade::DURACAO_VALIDA = 75;
const int TesteAtividade::AVALIACAO_VALIDA = 5;

/// @brief Método que cria uma instância do dominio de Atividade, e cria uma variável para controle dos testes.
void TesteAtividade::executar()
{
  atividade = new Atividade();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Atividade.
void TesteAtividade::excluir()
{
  delete atividade;
}

/// @brief Método que testa a validação do domínio de Atividade, usando try e catch para verificar se o valor passado é válido.
void TesteAtividade::testarSucesso()
{
  try
  {
    Codigo codigo(CODIGO_VALIDO);
    atividade->setCodigo(codigo);
    if (atividade->getCodigo().getCodigo() != CODIGO_VALIDO)
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
    atividade->setNome(nome);
    if (atividade->getNome().getNome() != NOME_VALIDO)
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
    Data data(DATA_VALIDA);
    atividade->setData(data);
    if (atividade->getData().getData() != DATA_VALIDA)
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
    Horario horario(HORARIO_VALIDO);
    atividade->setHorario(horario);
    if (atividade->getHorario().getHorario() != HORARIO_VALIDO)
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
    Duracao duracao(DURACAO_VALIDA);
    atividade->setDuracao(duracao);
    if (atividade->getDuracao().getDuracao() != DURACAO_VALIDA)
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
    atividade->setAvaliacao(avaliacao);
    if (atividade->getAvaliacao().getAvaliacao() != AVALIACAO_VALIDA)
    {
      status = FALHA;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }
}

/// @brief Método que executa os testes do domínio de Atividade.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteAtividade::run()
{
  executar();
  testarSucesso();
  excluir();
  return status;
}
