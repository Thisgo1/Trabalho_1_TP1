#ifndef DURACAO_H
#define DURACAO_H
#include <iostream>

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Domínio que armazena a duração de atividades.
/// Esta classe serve para implementar a lógica de validação, 
/// armazenamento e manipulação dos dados de duração de atividades.

class Duracao
{
private:
    int duracao;

public:
    Duracao();
    Duracao(const int &duracao)
    {
        setDuracao(duracao);
    };
    /// @brief O metodo construtor da classe valida e atribui um valor de duração.
    /// @param duracao um Inteiro entre 0 e 360.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 360.

    void setDuracao(const int &duracao)
    {
        if (duracao < 0 || duracao > 360)
        {
            throw std::invalid_argument("Duração inválida");
        }
        this->duracao = duracao;
    }
    /// @brief O metodo atribui um valor de duração.
    /// @param duracao um Inteiro entre 0 e 360.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 360.
    int getDuracao() const
    {
        return duracao;
    }
    /// @brief O metodo retorna o valor de duração.
    /// @return um Inteiro entre 0 e 360.
};

#endif // DURACAO_H
