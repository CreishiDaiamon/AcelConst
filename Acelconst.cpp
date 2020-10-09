#include <iostream>

int main() {
    double posin,
            velin,
            tiem,
            acel,
            posfinal;

    std::cout << "Bienvenido al calculo de movimiento rectilineo "
                 "con aceleracion constante\n"  << std::endl;
    std::cout << "inserte posicion incial:\n \tm:"  << std::endl;
    std::cin>> posin ;
    std::cout << "inserte velocidad incial:\n \tm/s:"  << std::endl;
    std::cin>> velin ;
    std::cout << "inserte tiempo:\n \tsegundos:"  << std::endl;
    std::cin>> tiem ;
    std::cout << "inserte valor de aceleracion:\n \tm/s2:\n"  << std::endl;
    std::cin>> acel ;

    posfinal = posin + (velin*tiem) + (0.5 * acel * std::pow (tiem, 2));
    std::cout << "El valor de la posicion del objeto es:"  << posfinal<< "m"<< std::endl;
    return 0;
}
