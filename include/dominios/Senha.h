#ifndef SENHA_H
#define SENHA_H
#pragma once

#include <stdexcept>
#include <string>
#include <algorithm>
#include <set>

// Aluno: Thiago Silva Ribeiro - 202037702

///@brief Domínio que armazena senhas, respeitando o intervalo de 5 caracteres numéricos, sem dígitos duplicados e sem sequências crescentes ou decrescentes.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de senhas.

class Senha
{
private:
    std::string valor;

public:
    Senha();
    virtual ~Senha();
    // Construtor que recebe um valor de senha e valida
    explicit Senha(const std::string &valor)
    {
        if (!validar(valor))
        {
            throw std::invalid_argument("Senha inválida");
        }
        this->valor = valor;
    }
    /// @brief O metodo construtor da classe valida e atribui um valor de senha.
    /// @param valor uma string de 5 caracteres numéricos.
    /// @throw invalid_argument caso o valor passado não esteja entre 5 caracteres numéricos, sem dígitos duplicados e sem sequências crescentes ou decrescentes.

    // Validação
    static bool validar(const std::string &valor)
    {
        // Verifica se possui 5 caracteres, e se todos são dígitos
        if (valor.size() != 5 || !std::all_of(valor.begin(), valor.end(), ::isdigit))
        {
            return false;
        }
        /// @brief O metodo validar() verifica se a senha é válida, retornando true se for e false se não for.
        /// @param valor uma string de 5 caracteres numéricos.
        /// @return um booleano.

        // Verifica se há dígitos duplicados
        std::set<char> digitosUnicos(valor.begin(), valor.end());
        if (digitosUnicos.size() != 5)
        {
            return false;
        }
        /// @brief O metodo validar() verifica se a senha é válida.
        /// @param valor uma string de 5 caracteres numéricos.
        /// @return um booleano.

        // Verifica sequências crescentes/decrescentes
        for (size_t i = 0; i < valor.size() - 2; ++i)
        {
            if ((valor[i + 1] == valor[i] + 1 && valor[i + 2] == valor[i] + 2) || // Crescente
                (valor[i + 1] == valor[i] - 1 && valor[i + 2] == valor[i] - 2))
            { // Decrescente
                return false;
            }
        }

        return true;
    }
    /// @brief O metodo verifica se a senha é válida.
    /// @param valor uma string de 5 caracteres numéricos.
    /// @return um booleano.

    // Getter
    std::string getSenha() const
    {
        return valor;
    }
    /// @brief O metodo retorna o valor de senha.
    /// @return uma string de 5 caracteres numéricos.
    // Setter
    void setValor(const std::string &valor)
    {
        if (!validar(valor))
        {
            throw std::invalid_argument("Senha inválida");
        }
        this->valor = valor;
    }
    /// @brief O metodo setValor() atribui um valor de senha.
    /// @param valor uma string de 5 caracteres numéricos.
    /// @throw invalid_argument caso o valor passado não esteja entre 5 caracteres numéricos, sem dígitos duplicados e sem sequências crescentes ou decrescentes.

    // Operador de comparação
    bool operator==(const std::string &outraSenha) const
    {
        return valor == outraSenha;
    }
    /// @brief O operador de comparação permite comparar um objeto Senha com uma string.
    /// @param outraSenha uma string de 5 caracteres numéricos.
    /// @return um booleano indicando se a senha é igual à string fornecida.
};

#endif // SENHA_H
