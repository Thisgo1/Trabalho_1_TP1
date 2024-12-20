#ifndef TESTEDURACAO_H
#define TESTEDURACAO_H

#include "../../dominios/Duracao.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Classe que testa a validação do domínio de Duração, por meio de um valor válido e um inválido.

class TesteDuracao
{
private:
  const static int VALOR_VALIDO;
  const static int VALOR_INVALIDO;
  Duracao *duracao;
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

#endif // TESTEDURACAO_H
