#ifndef HORARIO_HPP
#define HORARIO_HPP
#pragma once

#include <string>
#include <stdexcept>
#include <regex>

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Domínio que armazena horários, respeitando o intervalo de 00:00 a 23:59.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de horários.
class Horario {
private:
    std::string horario;

    // Função auxiliar para validar o horário
    bool validarHorario(const std::string& horario) const {
        std::regex formato("\\d{2}:\\d{2}"); // Formato HH:MM
        if (!std::regex_match(horario, formato)) {
            return false;
        }

        int horas = std::stoi(horario.substr(0, 2));
        int minutos = std::stoi(horario.substr(3, 2));

        // Validações de intervalo
        return horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59;
    }

public:
    // Construtor com validação
    Horario(const std::string& horario) {
        setHorario(horario);
    }
    /// @brief  O construtor da classe, que pode validar e atribuir um valor de horário.
    /// @param horario uma string no formato HH:MM.
    /// @throw invalid_argument caso o valor passado não esteja entre 00 e 23 para a hora e 00 e 59 para o minuto.
    // Construtor padrão
    Horario();

    // Setter com validação
    void setHorario(const std::string& horario) {
        if (!validarHorario(horario)) {
            throw std::invalid_argument("Horário inválido");
        }
        this->horario = horario;
    }
    /// @brief O metodo atribui um valor de horário.
    /// @param horario uma string no formato HH:MM.
    /// @throw invalid_argument caso o valor passado não esteja entre 00 e 23 para a hora e 00 e 59 para o minuto.  
    // Getter
    std::string getHorario() const {
        return horario;
    }
    /// @brief O metodo retorna o valor de horário.
    /// @return uma string no formato HH:MM.

};

#endif // HORARIO_HPP
