#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <stdexcept>

//Aluno: Thiago Silva Ribeiro - 202037702

/// @brief  Classe domínio que representa a avaliação de viagens,
/// hospedagens, destinos e atividades. Esta classe implementa a lógica de validação, 
/// armazenamento e manupilação de valores de avaliações.

class Avaliacao
{
private:
    int valor;

public:
    // Construtor padrão
    Avaliacao();

    // Construtor com validação
    Avaliacao(const int &avaliacao)
    {
        setAvaliacao(avaliacao);
    }
    /// @brief O metodo construtor da classe, caso tenha um valor atribuido da avaliação.
    /// @param avaliacao um Inteiro entre 0 e 5.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 5.

    // Setter com validação
    void setAvaliacao(const int &avaliacao)
    {
        if (avaliacao < 0 || avaliacao > 5)
        {
            throw std::invalid_argument("Avaliação inválida");
        }
        this->valor = avaliacao;
    }
    /// @brief O metodo setAvaliacao() atribui um valor de uma avaliação.
    /// @param avaliacao um Inteiro entre 0 e 5.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 5.

    // Getter
    int getAvaliacao() const
    {
        return valor;
    }
    /// @brief Este metódo retorna o valor da avaliação.
    /// @return um Inteiro entre 0 e 5.
};

#endif // AVALIACAO_H
