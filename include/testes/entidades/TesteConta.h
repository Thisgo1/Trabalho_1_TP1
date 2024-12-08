#ifndef TesteConta_h
#define TesteConta_h

#include "../../entidades/Conta.h"

/// @brief Classe que testa a validação da Entidade de Conta.

class TesteConta
{
private:
  const static std::string CODIGO_VALIDO;
  const static std::string SENHA_VALIDA;
  const static std::string CODIGO_INVALIDO;
  const static std::string SENHA_INVALIDA;


  Conta *conta;
  int status;

  void executar();
  void excluir();
  void testarSucesso();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;

  int run();
};

#endif // TesteConta_h
