#ifndef CAPA_HPP
#define CAPA_HPP

#include "neurona.hpp"
#include <cstddef>
#include <vector>

class Capa {
public:
    explicit Capa(const std::vector<Neurona>& neuronas);

    std::vector<double> propagar(const std::vector<double>& entradas) const;
    std::size_t tamano() const;

private:
    std::vector<Neurona> neuronas_;
};

#endif
