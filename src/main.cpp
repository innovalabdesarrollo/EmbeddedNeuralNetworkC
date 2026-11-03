#include "capa.hpp"
#include "neurona.hpp"
#include "red_neuronal.hpp"

#include <iostream>
#include <vector>

// Simulacion "Hola Mundo": red de 2 entradas -> 1 neurona oculta -> 1 salida
// Pesos fijos que aproximan la compuerta OR.
int main() {
    Neurona oculta1({2.0, 2.0}, -1.0);
    Neurona salida({4.0}, -2.0);

    Capa capa_oculta({oculta1});
    Capa capa_salida({salida});

    RedNeuronal red({capa_oculta, capa_salida});

    const std::vector<std::vector<double>> casos = {
        {0.0, 0.0},
        {0.0, 1.0},
        {1.0, 0.0},
        {1.0, 1.0},
    };

    std::cout << "=== Red Neuronal Hola Mundo ===\n";
    for (const auto& entradas : casos) {
        std::vector<double> resultado = red.simular(entradas);
        std::cout << "Entrada [" << entradas[0] << ", " << entradas[1]
                  << "] -> Salida " << resultado[0] << '\n';
    }

    return 0;
}
