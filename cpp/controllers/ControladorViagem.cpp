// ControladorViagem.cpp
#include "include\controllers\ControladorViagem.h"

ControladorViagem::ControladorViagem(IServicoViagem* servico)
    : servicoViagem(servico) {}

void ControladorViagem::criarViagem(const std::string& usuario, const Nome& nome, const Avaliacao& avaliacao) {
    servicoViagem->criarViagem(usuario, nome, avaliacao);
}

std::vector<Viagem> ControladorViagem::listarViagens() {
    return servicoViagem->listarViagens();
}
