#ifndef TESTEDINHEIRO_H
#define TESTEDINHEIRO_H

#include "../../dominios/Dinheiro.h"

/// @brief Classe que testa a validação do domínio de Dinheiro.

class TesteDinheiro
{
private:
  const static float VALOR_VALIDO;
  const static float VALOR_INVALIDO;
  Dinheiro *dinheiro;
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

#endif // TESTEDINHEIRO_H
