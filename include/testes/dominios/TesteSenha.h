#ifndef TESTESENHA_H
#define TESTESENHA_H

#include "../../dominios/Senha.h"

/// @brief Classe que testa a validação do domínio de Senha, por meio de um valor válido e um inválido.

class TesteSenha
{
private:
  const static std::string VALOR_VALIDO;
  const static std::string VALOR_INVALIDO;
  Senha *senha;
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

#endif // TESTESENHA_H
