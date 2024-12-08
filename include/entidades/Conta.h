#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <stdexcept>
#include "../../include/dominios/Codigo.h"
#include "../../include/dominios/Senha.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Entidade que armazena informações sobre a conta de usuário.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de contas.


class Conta {
private:
    Codigo codigo;
    Senha senha;

public:
    Conta();
    virtual ~Conta();
    // Construtor padrão
    Conta(const Codigo& codigo, const Senha& senha) : codigo(codigo), senha(senha) {}
    /// @brief Construtor da Entidade.
    /// @param codigo, senha.
    /// @throw invalid_argument caso codigo não seja uma string de 6 caracteres.
    /// @throw invalid_argument caso senha não seja uma string de 5 caracteres numéricos, sem dígitos duplicados e sem sequências crescentes ou decrescentes.
    
    // Métodos setters
    void setCodigo(const Codigo& codigo) {
        this->codigo = codigo;
    }
    /// @brief Atribui um valor de código.
    /// @param codigo uma string de 6 caracteres.
    /// @throw invalid_argument caso o valor passado não exatamente 6 caracteres.

    void setSenha(const Senha& senha) {
        this->senha = senha;
    }
    /// @brief Atribui um valor de senha.
    /// @param senha uma string de 5 caracteres numéricos.
    /// @throw invalid_argument caso o valor passado não esteja entre 5 caracteres numéricos, sem dígitos duplicados e sem sequências crescentes ou decrescentes.

    // Métodos getters
    Codigo getCodigo() const {
        return codigo;
    }
    /// @brief Retorna o valor de código.
    ///@return Uma string com 6 caracteres.
    
    Senha getSenha() const {
        return senha;
    }
    /// @brief Retorna o valor de senha.
    ///@return Uma string com 5 caracteres numéricos.
};

#endif // CONTA_H
