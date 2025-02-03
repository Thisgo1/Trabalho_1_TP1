#include "include\entidades\Hospedagem.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

class ControladoraHospedagem
{
private:
    std::vector<Hospedagem> hospedagens;

    void criarHospedagem(const std::string &codigo, const std::string &nome, const std::string &data, const std::string &avaliacao)
    {

        hospedagens.emplace_back(codigo, nome, data, avaliacao);
    }
    Hospedagem *buscarHospedagemPorCodigo(const std::string &codigo)
    {
        for (auto &hospedagem : hospedagens)
        {
            if (hospedagem.getCodigo() == codigo)
            {
                return &hospedagem;
            }
        }
        return nullptr;
    }

    void atualizarHospedagem(std::string& codigo, const std::string &novoNome, const std::string &novaAvaliacao)
    {
        Hospedagem *hospedagem = buscarHospedagemPorCodigo(codigo);
        if (hospedagem)
        {
            hospedagem->setAvaliacao(Avaliacao(novaAvaliacao));
            hospedagem->setAvaliacao(novaAvaliacao);
        }
    }

    void excluirHospedagem(std::string& codigo)
    {
        hospedagens.erase(std::remove_if(hospedagens.begin(), hospedagens.end(),
                                         [codigo](const Hospedagem &hospedagem)
                                         { return hospedagem.getCodigo() == codigo; }),
                          hospedagens.end());
    }

    void listarHospedagens() const
    {
        for (const auto &hospedagem : hospedagens)
        {
            hospedagem.imprimir();
        }
    }
};
