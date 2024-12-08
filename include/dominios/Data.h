#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <stdexcept>
#include <regex>

//Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Domínio que armazena datas, que são usadas por diversas entidades deste projeto.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de datas.

class Data
{
private:
    std::string data;

    // Função auxiliar para validar a data
    bool validarData(const std::string &data) const
    {
        std::regex formato("\\d{2}/\\d{2}/\\d{4}"); // Formato DD/MM/AAAA
        if (!std::regex_match(data, formato))
        {
            return false;
        }

        int dia = std::stoi(data.substr(0, 2));
        int mes = std::stoi(data.substr(3, 2));
        int ano = std::stoi(data.substr(6, 4));

        if (mes < 1 || mes > 12 || dia < 1 || ano < 1900 || ano > 2099)
        {
            return false;
        }

        // Verificar o número de dias em cada mês
        int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Ajuste para anos bissextos
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            diasNoMes[1] = 29; // Fevereiro tem 29 dias em anos bissextos
        }

        return dia <= diasNoMes[mes - 1];
    }

public:
    // Construtor com validação
    Data(const std::string &data)
    {
        setData(data);
    }

    /// @brief  Constroi a classe.
    /// @param data uma string no formato DD/MM/AAAA.
    /// @throw invalid_argument caso o valor passado não esteja entre 1 e 31 para o dia, 1 e 12 para o mês e 2000 e 2099 para o ano.
    Data();
    virtual ~Data();

    // Setter com validação
    void setData(const std::string &data)
    {
        if (!validarData(data))
        {
            throw std::invalid_argument("Data inválida");
        }
        this->data = data;
    }
    /// @brief O metodo setData() atribui um valor de data
    /// @param data uma string no formato DD/MM/AAAA.
    /// @throw invalid_argument caso o valor passado não esteja entre 1 e 31 para o dia, 1 e 12 para o mês e 2000 e 2099 para o ano.
    // Getter
    std::string getData() const
    {
        return data;
    }
    /// @brief O metodo retorna o valor de data.
    /// @return uma string no formato "DD/MM/AAAA".
};

#endif // DATA_HPP
