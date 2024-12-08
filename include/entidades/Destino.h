#ifndef DESTINO_H
#define DESTINO_H

#include "..\include\dominios\Codigo.h"
#include "..\include\dominios\Nome.h"
#include "..\include\dominios\Data.h"
#include "..\include\dominios\Avaliacao.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Entidade que armazena informações sobre destinos de viagens.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de destinos.

class Destino
{
private:
    Codigo codigo;
    Nome nome;
    Data dataInicio;
    Data dataTermino;
    Avaliacao avaliacao;

public:
    // Construtor padrão
    Destino();
    virtual ~Destino();
    Destino(
        const Codigo &codigo,
        const Nome &nome,
        const Data &dataInicio,
        const Data &dataTermino,
        const Avaliacao &avaliacao) : codigo(codigo), nome(nome), dataInicio(dataInicio), dataTermino(dataTermino), avaliacao(avaliacao) {}
    
    /// @brief Construtor da Entidade.
    /// @param codigo, nome, dataInicio, dataTermino, avaliacao.
    /// @throw invalid_argument caso codigo não seja uma string de 6 caracteres.
    /// @throw invalid_argument caso nome não seja uma string de 1 a 30 caracteres.
    /// @throw invalid_argument caso dataInicio não seja uma string nesse seguinte formato "DD/MM/AAAA", caso o valor passado não esteja entre 1 e 31 para o dia, 1 e 12 para o mês e 2000 e 2099 para o ano.
    /// @throw invalid_argument caso dataTermino não seja uma string nesse seguinte formato "DD/MM/AAAA", caso o valor passado não esteja entre 1 e 31 para o dia, 1 e 12 para o mês e 2000 e 2099 para o ano.
    /// @throw invalid_argument caso avaliacao caso o valor passado não esteja entre 0 e 5.
    

    // Métodos Getters
    Codigo getCodigo() const { return codigo; }
    /// @brief  Retorna o valor de código.
    /// @return Uma string com 6 caracteres.
    Nome getNome() const { return nome; }
    /// @brief  Retorna o valor de nome.
    /// @return Uma string de 1 a 30 caracteres.
    Data getDataInicio() const { return dataInicio; }
    /// @brief  Retorna o valor de dataInicio.
    /// @return Uma string no formato DD/MM/AAAA.
    Data getDataTermino() const { return dataTermino; }
    /// @brief  Retorna o valor de dataTermino.
    /// @return Uma string no formato DD/MM/AAAA.
    Avaliacao getAvaliacao() const { return avaliacao; }
    /// @brief  Retorna o valor de avaliacao.
    /// @return Um inteiro entre 0 e 5.

    // Métodos Setters

    void setCodigo(const Codigo &codigo) { this->codigo = codigo; }
    /// @brief Atribui um valor de código.
    /// @param codigo uma string de 6 caracteres.

    void setNome(const Nome &nome) { this->nome = nome; }
    /// @brief Atribui um valor de nome.
    /// @param nome uma string de 1 a 30 caracteres.

    void setDataInicio(const Data &dataInicio) { this->dataInicio = dataInicio; }
    /// @brief Atribui um valor de dataInicio.
    /// @param dataInicio uma string no formato DD/MM/AAAA.

    void setDataTermino(const Data &dataTermino) { this->dataTermino = dataTermino; }
    /// @brief Atribui um valor de dataTermino.
    /// @param dataTermino uma string no formato DD/MM/AAAA.

    void setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
    /// @brief Atribui um valor de avaliacao.
    /// @param avaliacao um inteiro entre 0 e 5.
};

#endif // DESTINO_H
