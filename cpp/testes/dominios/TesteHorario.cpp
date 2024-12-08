#include "../include/testes/dominios/TesteHorario.h"
#include <stdexcept>

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

/// @brief Declaração de valores válidos para horário.
const std::string TesteHorario::VALOR_VALIDO = "12:00";
const std::string TesteHorario::VALOR_INVALIDO = "12:60";

/// @brief Método que cria uma instância do dominio de Horário, e cria uma variável para controle dos testes.
void TesteHorario::Executar()
{
  horario = new Horario();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Horário.
void TesteHorario::Excluir()
{
  delete horario;
}

/// @brief Método que testa a validação do domínio de Horário, usando try e catch para verificar se o valor passado é válido.
void TesteHorario::Sucesso()
{
  try
  {
    horario->setHorario(VALOR_VALIDO);
    if (horario->getHorario() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Horário, usando try e catch para verificar se o valor passado é inválido.
void TesteHorario::Falha()
{
  try
  {
    horario->setHorario(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Horário.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteHorario::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
