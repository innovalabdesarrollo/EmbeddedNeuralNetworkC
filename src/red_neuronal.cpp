#include "red_neuronal.hpp"

#include <stdexcept>

RedNeuronal::RedNeuronal(const std::vector<Capa>& capas) : capas_(capas) {
    if (capas_.empty()) {
        throw std::invalid_argument("La red neuronal requiere al menos una capa");
    }
}

std::vector<double> RedNeuronal::simular(const std::vector<double>& entradas) const {
    std::vector<double> actual = entradas;
    for (const Capa& capa : capas_) {
        actual = capa.propagar(actual);
    }
    return actual;
}
