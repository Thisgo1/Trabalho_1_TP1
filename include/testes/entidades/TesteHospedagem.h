#ifndef TesteHospedagem_h
#define TesteHospedagem_h

#include "../../entidades/Hospedagem.h"

/// @brief Classe que testa a validação da Entidade de Hospedagem.

class TesteHospedagem
{
private:
  //Declaração de valores válidos para hospedagem.
  const static std::string CODIGO_VALIDO;
  const static std::string NOME_VALIDO;
  const static std::string DINHEIRO_VALIDO;
  const static int AVALIACAO_VALIDA;

  //Ponteiro para a entidade Hospedagem.
  Hospedagem *hospedagem;
  int status;

  //Método que cria uma instância do dominio de Hospedagem, e cria uma variável para controle dos testes.
  void executar();
  void excluir();
  void testarSucesso();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;

  int run();
};

#endif // TesteHospedagem_h
