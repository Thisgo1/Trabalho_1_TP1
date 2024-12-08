#include "../include/testes/dominios/TesteNome.h"
#include <stdexcept>

// Aluno: Thiago Silva Ribeiro - 202037702

using namespace std;

/// @brief Declaração de valores válidos para nome.
const std::string TesteNome::VALOR_VALIDO = "Joao";
const std::string TesteNome::VALOR_INVALIDO = "";

/// @brief Método que cria uma instância do dominio de Nome, e cria uma variável para controle dos testes.
void TesteNome::Executar()
{
  nome = new Nome();
  status = SUCESSO;
}

/// @brief Método que exclui a instância do dominio de Nome.
void TesteNome::Excluir()
{
  delete nome;
}

/// @brief Método que testa a validação do domínio de Nome, usando try e catch para verificar se o valor passado é válido.
void TesteNome::Sucesso()
{
  try
  {
    nome->setNome(VALOR_VALIDO);
    if (nome->getNome() != VALOR_VALIDO)
    {
      status = FALHA;
    }
  }
  catch (std::invalid_argument &excecao)
  {
    status = FALHA;
  }
}

/// @brief Método que testa a validação do domínio de Nome, usando try e catch para verificar se o valor passado é inválido.
void TesteNome::Falha()
{
  try
  {
    nome->setNome(VALOR_INVALIDO);
    status = FALHA;
  }
  catch (std::invalid_argument &excecao)
  {
    return;
  }
}

/// @brief Método que executa os testes do domínio de Nome.
/// @return status que informa se o teste foi bem sucedido ou não.
int TesteNome::run()
{
  Executar();
  Sucesso();
  Falha();
  Excluir();
  return status;
}
