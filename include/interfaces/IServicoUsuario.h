#include <string>
#include <vector>

class Conta; // Forward declaration

class IServicoUsuario
{

public:
  virtual ~IServicoUsuario() = default;

  virtual bool criarUsuario(const std::string &usuario, const std::string &senha) = 0;

  virtual Conta *buscarUsuario(const std::string &usuario) = 0;

  virtual bool atualizarUsuario(const std::string &usuario, const std::string &novaSenha) = 0;

  virtual bool excluirUsuario(const std::string &usuario) = 0;

  virtual std::vector<std::string> listarUsuarios() = 0;
};
