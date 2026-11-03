#include "neurona.hpp"

#include <cmath>
#include <stdexcept>

Neurona::Neurona(const std::vector<double>& pesos, double sesgo)
    : pesos_(pesos), sesgo_(sesgo) {}

double Neurona::activar(const std::vector<double>& entradas) const {
    if (entradas.size() != pesos_.size()) {
        throw std::invalid_argument("El numero de entradas no coincide con los pesos");
    }

    double suma = sesgo_;
    for (std::size_t i = 0; i < pesos_.size(); ++i) {
        suma += pesos_[i] * entradas[i];
    }
    return sigmoide(suma);
}

const std::vector<double>& Neurona::obtenerPesos() const {
    return pesos_;
}

double Neurona::obtenerSesgo() const {
    return sesgo_;
}

double Neurona::sigmoide(double x) {
    return 1.0 / (1.0 + std::exp(-x));
}
