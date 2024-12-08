#include "../include/testes/entidades/TesteDestino.h"

/// @brief Declaração de valores válidos para destino.
const std::string TesteDestino::CODIGO_VALIDO = "ABC123";
const std::string TesteDestino::NOME_VALIDO = "Sao Paulo";
const std::string TesteDestino::DATA_INICIO_VALIDA = "01/01/2021";
const std::string TesteDestino::DATA_TERMINO_VALIDA = "02/01/2021";
const int TesteDestino::AVALIACAO_VALIDA = 3;

/// @brief  Método que cria uma instância do dominio de Destino, e cria uma variável para controle dos testes.
void TesteDestino::executar()
{
  destino = new Destino();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Destino.
void TesteDestino::excluir()
{
  delete destino;
}

/// @brief Método que testa a validação do domínio de Destino, usando try e catch para verificar se o valor passado é válido.
void TesteDestino::testarSucesso()
{

  try
  {
    Codigo codigo(CODIGO_VALIDO);
    destino->setCodigo(codigo);
    if (destino->getCodigo().getCodigo() == CODIGO_VALIDO)
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
    Data dataInicio(DATA_INICIO_VALIDA);
    destino->setDataInicio(dataInicio);
    if (destino->getDataInicio().getData() == DATA_INICIO_VALIDA)
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
    Data dataTermino(DATA_TERMINO_VALIDA);
    destino->setDataTermino(dataTermino);
    if (destino->getDataTermino().getData() == DATA_TERMINO_VALIDA)
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
    Avaliacao avaliacao(AVALIACAO_VALIDA);
    destino->setAvaliacao(avaliacao);
    if (destino->getAvaliacao().getAvaliacao() == AVALIACAO_VALIDA)
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
    Nome nome(NOME_VALIDO);
    destino->setNome(nome);
    if (destino->getNome().getNome() == NOME_VALIDO)
    {
      status = SUCESSO;
    }
  }
  catch (const std::invalid_argument &e)
  {
    status = FALHA;
  }
};

/// @brief Método que executa os testes do domínio de Destino.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteDestino::run()
{
  executar();
  testarSucesso();
  excluir();
  return status;
  ;
}
