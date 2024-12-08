#ifndef DINHEIRO_H
#define DINHEIRO_H

#include <stdexcept>
#include <iomanip>

// Aluno: Thiago Silva Ribeiro - 202037702


/// @brief Domínio que armazena valores monetários.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de valores monetários.

class Dinheiro
{
private:
    double valor;

public:
    /** Default constructor */
    Dinheiro();
    Dinheiro(const std::string &valor)
    {
        setValor(stof(valor));
    };
    /// @brief O metodo construtor do dominio dinheiro.
    /// @param valor uma string com um número decimal de duas casas de precisão ou um número decimal.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 200000,00.
    
    Dinheiro(const double &valor)
    {
        setValor(valor);
    };

    void setValor(const double &valor)
    {
        if (valor < 0.00 || valor > 200000.00)
        {
            throw std::invalid_argument("Valor invalido");
        }
        this->valor = valor;
    }
    /// @brief O metodo atribui um valor de dinheiro.
    /// @param valor um double entre 0.00 e 200000.00 ou uma string com um valor no mesmo range.
    /// @throw invalid_argument caso o valor passado não esteja entre 0 e 200000,00.

    double getValor() const
    {
        return valor;
    }
    /// @brief O metodo retorna um valor decimal.
    /// @return um double entre 0.00 e 200000.00.

    std::string getDinheiro() const
    {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2) << valor;
        return oss.str();
    }
    /// @brief O metodo transforma o valor decimal e em uma string formatada, retorna o valor em string.
    /// @return uma string com o valor decimal formatado neste modelo 20.00 .
};

#endif // DINHEIRO_H
