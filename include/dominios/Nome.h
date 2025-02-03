#ifndef NOME_H
#define NOME_H
#pragma once

#include <string>
#include <stdexcept>

// Aluno: Thiago Silva Ribeiro - 202037702

///@brief Domínio que armazena nomes respeitando o intervalo de 1 a 30 caracteres.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de nomes.

class Nome
{
private:
    std::string nome;

public:
    Nome();

    Nome(const std::string &nome)
    {
        setNome(nome);
    };

    /// @brief O metodo construtor da classe valida e atribui um valor de nome.
    /// @param nome uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso o valor passado não esteja entre 1 e 30 caracteres.

    void setNome(const std::string &nome)
    {
        if (nome.length() < 1 || nome.length() > 30)
        {
            throw std::invalid_argument("Nome inválido");
        }
        this->nome = nome;
    };
    /// @brief O metodo atribui um valor de nome.
    /// @param nome uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso o valor passado não esteja entre 1 e 30 caracteres.
    std::string getNome() const
    {
        return nome;
    };
    /// @brief Retorna o valor de nome.
    /// @return uma string de 1 a 30 caracteres.
};

#endif // NOME_H
