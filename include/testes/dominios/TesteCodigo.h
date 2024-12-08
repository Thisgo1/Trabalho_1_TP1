#ifndef TESTECODIGO_H
#define TESTECODIGO_H

#include "../../dominios/Codigo.h"

/// @brief Classe que testa a validação do domínio de Código, por meio de um valor válido e um inválido.

class TesteCodigo
{
private:
  const static std::string VALOR_VALIDO;
  const static std::string VALOR_INVALIDO;

  Codigo *codigo;
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

#endif // TESTECODIGO_H
