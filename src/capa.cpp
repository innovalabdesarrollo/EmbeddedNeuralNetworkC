#include "capa.hpp"

Capa::Capa(const std::vector<Neurona>& neuronas) : neuronas_(neuronas) {}

std::vector<double> Capa::propagar(const std::vector<double>& entradas) const {
    std::vector<double> salidas;
    salidas.reserve(neuronas_.size());

    for (const Neurona& neurona : neuronas_) {
        salidas.push_back(neurona.activar(entradas));
    }
    return salidas;
}

std::size_t Capa::tamano() const {
    return neuronas_.size();
}
