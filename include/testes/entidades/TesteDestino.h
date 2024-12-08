#ifndef TesteDestino_h
#define TesteDestino_h

#include "../../entidades/Destino.h"

/// @brief Classe que testa a validação da Entidade de Destino.

class TesteDestino
{
private:
  const static std::string CODIGO_VALIDO;
  const static std::string NOME_VALIDO;
  const static std::string DATA_INICIO_VALIDA;
  const static std::string DATA_TERMINO_VALIDA;
  const static int AVALIACAO_VALIDA;

  Destino *destino;
  int status;

  void executar();
  void excluir();
  void testarSucesso();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;

  int run();
};

#endif // TesteDestino_h
