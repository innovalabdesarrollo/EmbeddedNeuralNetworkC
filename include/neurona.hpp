#ifndef NEURONA_HPP
#define NEURONA_HPP

#include <vector>

class Neurona {
public:
    Neurona(const std::vector<double>& pesos, double sesgo);

    double activar(const std::vector<double>& entradas) const;
    const std::vector<double>& obtenerPesos() const;
    double obtenerSesgo() const;

private:
    std::vector<double> pesos_;
    double sesgo_;

    static double sigmoide(double x);
};

#endif
