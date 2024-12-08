#ifndef ATIVIDADE_H
#define ATIVIDADE_H

#include "..\include\dominios\Codigo.h"
#include "..\include\dominios\Nome.h"
#include "..\include\dominios\Data.h"
#include "..\include\dominios\Horario.h"
#include "..\include\dominios\Duracao.h"
#include "..\include\dominios\Avaliacao.h"

// Aluno: Thiago Silva Ribeiro - 202037702

/// @brief Entidade que junta os dominios criados anteriormente, para assim cria uma representação de Atividades.
/// Esta classe serve para implementar a lógica de validação, armazenamento e manipulação dos dados de atividades.
class Atividade
{
private:
  Codigo codigo;
  Nome nome;
  Data data;
  Horario horario;
  Duracao duracao;
  Avaliacao avaliacao;

public:
  /// @brief Construtor da Entidade.
  /// @param codigo, nome, data, horario, duracao, avaliacao.
  /// @throw invalid_argument caso codigo não seja uma string de 6 caracteres.
  /// @throw invalid_argument caso nome não seja uma string de 1 a 30 caracteres.
  /// @throw invalid_argument caso data não seja uma string nesse seguinte formato "DD/MM/AAAA".
  /// @throw invalid_argument caso horario caso o valor passado não esteja entre 00 e 23 para a hora e 00 e 59 para o minuto.
  /// @throw invalid_argument caso duracao caso o valor não seja um inteiro entre 01 e 360.
  /// @throw invalid_argument caso avaliacao caso o valor passado não esteja entre 0 e 5.

  // Construtor padrão
  Atividade();
  virtual ~Atividade();
  Atividade(
      const Codigo &codigo,
      const Nome &nome,
      const Data &data,
      const Horario &horario,
      const Duracao &duracao,
      const Avaliacao &avaliacao) : codigo(codigo), nome(nome), data(data), horario(horario), duracao(duracao), avaliacao(avaliacao) {}

  // Métodos Getters
  Codigo getCodigo() const { return codigo; }
  /// @brief Retorna o valor de código.
  ///@return Uma string com 6 caracteres.
  Nome getNome() const { return nome; }
  /// @brief Retorna o valor de nome.
  ///@return Uma string de 1 a 30 caracteres.
  Data getData() const { return data; }
  /// @brief Retorna o valor de data.
  ///@return Uma string no formato DD/MM/AAAA.
  Horario getHorario() const { return horario; }
  /// @brief Retorna o valor de horário.
  ///@return Uma string no formato HH:MM.
  Duracao getDuracao() const { return duracao; }
  /// @brief Retorna o valor de duração.
  ///@return Um inteiro entre 0 e 360.
  Avaliacao getAvaliacao() const { return avaliacao; }
  /// @brief Retorna o valor de avaliação.
  ///@return Um inteiro entre 0 e 5.

  // Métodos Setters
  void setCodigo(const Codigo &codigo) { this->codigo = codigo; }
  /// @brief Atribui um valor de código.
  /// @param codigo uma string de 6 caracteres.
  /// @throw invalid_argument caso o valor passado não exatamente 6 caracteres.
  void setNome(const Nome &nome) { this->nome = nome; }
  /// @brief Atribui um valor de nome.
  /// @param nome uma string de 1 a 30 caracteres.
  /// @throw invalid_argument caso o valor passado não esteja entre 1 e 30 caracteres.
  void setData(const Data &data) { this->data = data; }
  /// @brief Atribui um valor de data.
  /// @param data uma string no formato DD/MM/AAAA.
  /// @throw invalid_argument caso o valor passado não esteja entre 1 e 31 para o dia, 1 e 12 para o mês e 2000 e 2099 para o ano.
  void setHorario(const Horario &horario) { this->horario = horario; }
  /// @brief Atribui um valor de horário.
  /// @param horario uma string no formato HH:MM.
  /// @throw invalid_argument caso o valor passado não esteja entre 00 e 23 para a hora e 00 e 59 para o minuto.
  void setDuracao(const Duracao &duracao) { this->duracao = duracao; }
  /// @brief Atribui um valor de duração.
  /// @param duracao um Inteiro entre 0 e 360.
  /// @throw invalid_argument caso o valor passado não esteja entre 0 e 360.
  void setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
  /// @brief Atribui um valor de avaliação.
  /// @param avaliacao um Inteiro entre 0 e 5.
  /// @throw invalid_argument caso o valor passado não esteja entre 0 e 5.
};

#endif // ATIVIDADE_H
