#ifndef TesteViagem_h
#define TesteViagem_h

#include "../../entidades/Viagem.h"

/// @brief Classe que testa a validação da Entidade de Viagem.

class TesteViagem
{
private:
  //Declaração de valores válidos para viagem.
  const static std::string CODIGO_VALIDO;
  const static std::string NOME_VALIDO;
  const static int AVALIACAO_VALIDA;

  //Ponteiro para a entidade Viagem.
  Viagem *viagem;
  int status;

  //Método que cria uma instância do dominio de Viagem, e cria uma variável para controle dos testes.
  void executar();
  void excluir();
  void testarSucesso();


public:
  /// @brief Constantes que indicam o sucesso ou falha do teste.
  const static int SUCESSO = 0;
  const static int FALHA = -1;

  int run();
};
#endif // TesteViagem_h
