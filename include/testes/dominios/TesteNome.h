#ifndef TESTENOME_H
#define TESTENOME_H

#include "../../dominios/Nome.h"

/// @brief Classe que testa a validação do domínio de Nome.

class TesteNome
{
private:
  const static std::string VALOR_VALIDO;
  const static std::string VALOR_INVALIDO;
  Nome *nome;
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

#endif // TESTENOME_H
