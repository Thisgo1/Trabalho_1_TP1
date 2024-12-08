#ifndef TESTEDINHEIRO_H
#define TESTEDINHEIRO_H

#include "../../dominios/Dinheiro.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Classe que testa a validação do domínio de Dinheiro, por meio de um valor válido e um inválido.

class TesteDinheiro
{
private:
  const static double VALOR_VALIDO;
  const static double VALOR_INVALIDO;
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
