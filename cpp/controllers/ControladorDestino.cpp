#include "include\entidades\Destino.h"

class ControladoraDestino {
private:
    std::vector<Destino> destinos;

public:
    void criarDestino(int codigo, const std::string& nome, const std::string& dataInicio, const std::string& dataTermino, const std::string& avaliacao) {
        destinos.emplace_back(codigo, nome, dataInicio, dataTermino, avaliacao);
    }

    Destino* buscarDestinoPorCodigo(int codigo) {
        for (auto& destino : destinos) {
            if (destino.getCodigo() == codigo) {
                return &destino;
            }
        }
        return nullptr;
    }

    void atualizarDestino(int codigo, const std::string& novoNome, const std::string& novaAvaliacao) {
        Destino* destino = buscarDestinoPorCodigo(codigo);
        if (destino) {
            destino->setNome(novoNome);
            destino->setAvaliacao(novaAvaliacao);
        }
    }

    void excluirDestino(int codigo) {
        destinos.erase(std::remove_if(destinos.begin(), destinos.end(),
            [codigo](const Destino& destino) { return destino.getCodigo() == codigo; }),
            destinos.end());
    }

    void listarDestinos() const {
        for (const auto& destino : destinos) {
            destino.imprimir();
        }
    }
};
