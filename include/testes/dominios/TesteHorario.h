#ifndef TESTEHORARIO_H
#define TESTEHORARIO_H

#include "../../dominios/Horario.h"

/// @brief Classe que testa a validação do domínio de Horário.

class TesteHorario
{
private:
  const static std::string VALOR_VALIDO;
  const static std::string VALOR_INVALIDO;
  Horario *horario;
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

#endif // TESTEHORARIO_H
