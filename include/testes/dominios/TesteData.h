#ifndef TESTEDATA_H
#define TESTEDATA_H

#include "../../dominios/Data.h"

/// @brief Classe que testa a validação do domínio de Data, por meio de um valor válido e um inválido.

class TesteData
{
private:
  const static std::string VALOR_VALIDO;
  const static std::string VALOR_INVALIDO;

  Data *data;
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

#endif // TESTEDATA_H
