#include "../include/testes/dominios/TesteData.h"
#include <stdexcept>

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

/// @brief Declaração de valores válidos para data.
const std::string TesteData::VALOR_VALIDO = "12/12/2020";
const std::string TesteData::VALOR_INVALIDO = "12/12/20";

/// @brief  Método que cria uma instância do dominio de Data, e cria uma variável para controle dos testes.
void TesteData::Executar()
{
  data = new Data();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Data.
void TesteData::Excluir()
{
  delete data;
}

/// @brief Método que testa a validação do domínio de Data, usando try e catch para verificar se o valor passado é válido.
void TesteData::Sucesso()
{
  try
  {
    data->setData(VALOR_VALIDO);
    if (data->getData() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Data, usando try e catch para verificar se o valor passado é inválido.
void TesteData::Falha()
{
  try
  {
    data->setData(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Data.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteData::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
