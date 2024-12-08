#ifndef TESTEAVALIACAO_H
#define TESTEAVALIACAO_H

#include "../../dominios/Avaliacao.h"

/// @brief Classe que testa a validação do domínio de Avaliação, por meio de um valor válido e um inválido.

class TesteAvaliacao
{
private:
  const static int VALOR_VALIDO;
  const static int VALOR_INVALIDO;

  Avaliacao *avaliacao;
  int status;
  void Executar();
  void Excluir();
  void Sucesso();
  void Falha();

public:
  static const int SUCESSO = 0;
  static const int FALHA = 1;
  int run();
};

#endif // TESTEAVALIACAO_H
