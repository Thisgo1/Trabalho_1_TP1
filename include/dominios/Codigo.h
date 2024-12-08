#ifndef CODIGO_H
#define CODIGO_H

#include <string>
#include <stdexcept>

//Aluno : Thiago Silva Ribeiro - 202037702

/// @brief Domínio que armazena os códigos identificadores de todas as entidades implementadas neste projeto.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados desses códigos.

class Codigo
{
private:
    std::string valor;

public:
    Codigo();
    virtual ~Codigo();
    Codigo(const std::string &valor)
    {
        setValor(valor);
    }
    /// @brief O metodo construtor da classe valida e atribui um valor de código.
    /// @param valor uma string de 6 caracteres.
    /// @throw invalid_argument caso o valor passado não exatamente 6 caracteres.

    void setValor(const std::string &valor)
    {
        if (valor.length() != 6)
        {
            throw std::invalid_argument("O código deve ter exatamente 6 caracteres.");
        }
        this->valor = valor;
    }
    /// @brief O metodo setValor() atribui um valor de código. 
    /// @param valor uma string de 6 caracteres sendo esses caracteres digitos[0-9] ou letras[a-z ou A-Z].
    /// @throw invalid_argument caso o valor passado não exatamente 6 caracteres, ou tenha caracteres especiais.
    
    std::string getCodigo() const
    {
        return valor;
    }
    /// @brief retorna o valor de código.
    /// @return uma string de 6 caracteres. 
};

#endif // CODIGO_H
