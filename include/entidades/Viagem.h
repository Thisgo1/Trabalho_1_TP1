#ifndef VIAGEM_H
#define VIAGEM_H
#pragma once

#include "..\include\dominios\Codigo.h"
#include "..\include\dominios\Nome.h"
#include "..\include\dominios\Avaliacao.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Entidade que armazena informações sobre viagens.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de viagens.

class Viagem
{
private:
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;

public:
    // Construtor padrão
    Viagem();
    virtual ~Viagem();
    Viagem(
        const Codigo &codigo,
        const Nome &nome,
        const Avaliacao &avaliacao) : codigo(codigo), nome(nome), avaliacao(avaliacao) {}
    /// @brief Construtor da entidade Viagem.
    /// @param codigo, nome, avaliacao.
    /// @throw invalid_argument caso codigo não seja uma string de 6 caracteres.
    /// @throw invalid_argument caso nome não seja uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso avaliacao caso o valor passado não esteja entre 0 e 5.

    // Métodos Getters
    Codigo getCodigo() const { return codigo; }
    /// @brief Retorna o valor de código.
    /// @return Uma string com 6 caracteres.
    Nome getNome() const { return nome; }
    /// @brief Retorna o valor de nome.
    /// @return Uma string de 1 a 30 caracteres.
    Avaliacao getAvaliacao() const { return avaliacao; }
    /// @brief Retorna o valor de avaliação.
    /// @return Um inteiro entre 0 e 5.

    // Métodos Setters
    void setCodigo(const Codigo &codigo) { this->codigo = codigo; }
    /// @brief Atribui um valor de código.
    /// @param codigo uma string de 6 caracteres.
    /// @throw invalid_argument caso o valor passado não exatamente 6 caracteres.

    void setNome(const Nome &nome) { this->nome = nome; }
    /// @brief Atribui um valor de Nome.
    /// @param nome uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso o valor passado não esteja entre 1 e 30 caracteres.

    void setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
    /// @brief Atribui um valor de Avaliação.
    /// @param avaliacao um inteiro entre 0 e 5.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 5.   
};

#endif // VIAGEM_H
