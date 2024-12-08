#ifndef TesteAtividade_h
#define TesteAtividade_h

#include "../../entidades/Atividade.h"

/// @brief Classe que testa a validação da Entidade de Atividade.

class TesteAtividade
{
private:
  const static std::string CODIGO_VALIDO;
  const static std::string NOME_VALIDO;
  const static std::string DATA_VALIDA;
  const static std::string HORARIO_VALIDO;
  const static int DURACAO_VALIDA;
  const static int AVALIACAO_VALIDA;

  Atividade *atividade;
  int status;

  void executar();
  void excluir();
  void testarSucesso();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;

  int run();
};

#endif // TesteAtividade_h
