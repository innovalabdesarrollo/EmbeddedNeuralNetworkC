#ifndef RED_NEURONAL_HPP
#define RED_NEURONAL_HPP

#include "capa.hpp"
#include <vector>

class RedNeuronal {
public:
    explicit RedNeuronal(const std::vector<Capa>& capas);

    std::vector<double> simular(const std::vector<double>& entradas) const;

private:
    std::vector<Capa> capas_;
};

#endif
