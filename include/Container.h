#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "../dominios/Codigo.h"
#include "../dominios/Senha.h"
#include "../dominios/Nome.h"
#include "../dominios/Data.h"
#include "../entidades/Conta.h"
#include "../dominios/Horario.h"

#include <map>
#include <vector>

using namespace std;

class ContainerUsuario
{
private:
  map<string, Conta> container;
  static ContainerUsuario *instancia;
  ContainerUsuario() {};

public:
  static ContainerUsuario *getInstancia();
  bool criarUsuario(Conta conta);
  bool removerUsuario(Codigo codigo);
  bool retornarUsuario(Conta *conta);
  Conta visualizar(Conta *conta);
  bool verificarUsuario(Codigo codigo);
  bool atualizarUsuario(Conta conta);
  // vector<Conta> buscarUsuarios();
};

class ContainerViagem
{
};
class ContainerAtividade
{
};

#endif // CONTAINERS_H_INCLUDE
