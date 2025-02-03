#include <iostream>
#include "include\entidades\Atividade.h"

class ControladoraAtividade {
private:
    std::vector<Atividade> atividades;

public:
    void criarAtividade(std::string& codigo, const std::string& nome, const std::string& data, const std::string& horario, const std::string& duracao, double preco, const std::string& avaliacao) {
        atividades.emplace_back(codigo, nome, data, horario, duracao, preco, avaliacao);
    }

    Atividade* buscarAtividadePorCodigo(const std::string& codigo) {
        for (auto& atividade : atividades) {
            if (atividade.getCodigo() == codigo) {
                return &atividade;
            }
        }
        return nullptr;
    }

    void atualizarAtividade(std::string& codigo, const std::string& novoNome, const std::string& novaAvaliacao) {
        Atividade* atividade = buscarAtividadePorCodigo(codigo);
        if (atividade) {
            atividade->setNome(novoNome);
            atividade->setAvaliacao(novaAvaliacao);
        }
    }

    void excluirAtividade(std::string& codigo) {
        atividades.erase(std::remove_if(atividades.begin(), atividades.end(),
            [codigo](const Atividade& atividade) { return atividade.getCodigo() == codigo; }),
            atividades.end());
    }

    void listarAtividades() const {
        for (const auto& atividade : atividades) {
            atividade.imprimir();
        }
    }
};
