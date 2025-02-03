#ifndef ISERVICOVIAGEM_H
#define ISERVICOVIAGEM_H

#include "../include/entidades/Viagem.h"
#include "../include/dominios/Codigo.h"
#include "../include/dominios/Nome.h"
#include "../include/dominios/Avaliacao.h"
#include <vector>

class IServicoViagem {
public:
    virtual void criarViagem(const Codigo& codigo, const Nome& nome, const Avaliacao& avaliacao) = 0;
    virtual std::vector<Viagem> listarViagens() const = 0;
    virtual ~IServicoViagem() = default;
};

#endif // ISERVICOVIAGEM_H
