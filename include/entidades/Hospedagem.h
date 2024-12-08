#ifndef HOSPEDAGEM_H
#define HOSPEDAGEM_H

#include "..\include\dominios\Codigo.h"
#include "..\include\dominios\Nome.h"
#include "..\include\dominios\Dinheiro.h"
#include "..\include\dominios\Avaliacao.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Entidade que armazena informações sobre hospedagens.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de hospedagens.

class Hospedagem
{
private:
    Codigo codigo;
    Nome nome;
    Dinheiro dinheiro;
    Avaliacao avaliacao;

public:
    // Construtor padrão
    Hospedagem();
    virtual ~Hospedagem();
    Hospedagem(
        const Codigo &codigo,
        const Nome &nome,
        const Dinheiro &dinheiro,
        const Avaliacao &avaliacao) : codigo(codigo), nome(nome), dinheiro(dinheiro), avaliacao(avaliacao) {}
    /// @brief Construtor da Entidade de hospedagem.
    /// @param codigo, nome, dinheiro, avaliacao.
    /// @throw invalid_argument caso codigo não seja uma string de 6 caracteres.
    /// @throw invalid_argument caso nome não seja uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso dinheiro caso o valor não seja um double entre 0.00 e 200000.00.
    /// @throw invalid_argument caso avaliacao caso o valor passado não esteja entre 0 e 5.


    // Métodos Getters
    Codigo getCodigo() const { return codigo; }
    /// @brief  Retorna o valor de código.
    /// @return Uma string com 6 caracteres.
    Nome getNome() const { return nome; }
    /// @brief  Retorna o valor do nome.
    /// @return Uma string de 1 a 30 caracteres.
    Dinheiro getDinheiro() const { return dinheiro; }
    /// @brief  Retorna o valor do dinheiro.
    /// @return Um double entre 0.00 e 200000.00.
    Avaliacao getAvaliacao() const { return avaliacao; }
    /// @brief  Retorna o valor de avalição.
    /// @return Um inteiro entre 0 e 5.

    // Métodos Setters
    void setCodigo(const Codigo &codigo) { this->codigo = codigo; }
    /// @brief O metodo atribui um valor de código.
    /// @param codigo uma string de 6 caracteres.

    void setNome(const Nome &nome) { this->nome = nome; }
    /// @brief O metodo atribui um valor de nome.
    /// @param nome uma string de 1 a 30 caracteres.

    void setDinheiro(const Dinheiro &dinheiro) { this->dinheiro = dinheiro; }
    /// @brief O metodo atribui um valor de dinheiro.
    /// @param dinheiro um double entre 0.00 e 200000.00. Ou uma string com um valor no mesmo range.

    void setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
    /// @brief O metodo atribui um valor de avaliação.
    /// @param avaliacao um Inteiro entre 0 e 5.

};

#endif // HOSPEDAGEM_H
