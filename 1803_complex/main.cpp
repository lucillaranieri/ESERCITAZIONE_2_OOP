//esercitazione2 su numeri complessi
#include <iostream>
#include "complex_number.hpp"

int main() {
    // Creo due numeri complessi, uno con float e uno con double
    complex_number<float> c1(1.0, 2.0);
    complex_number<float> c2(3.0, -4.0);

    // Stampa i numeri complessi
    std::cout << "c1 = " << c1 << "; la parte reale è " <<  c1.real() << " la sua parte immaginaria è " << c1.imag() << std::endl;
    std::cout << "c2 = " << c2 << "; la parte reale è " <<  c2.real() << " la sua parte immaginaria è " << c2.imag() << std::endl;

    // Somma numeri complessi
    auto sum = c1 + c2;
    std::cout << "Somma: " << sum << std::endl;

    // Prodotto numeri complessi
    auto prod = c1 * c2;
    std::cout << "Prodotto: " << prod << std::endl;

    // Coniugato
std::cout << "Il programma restituisce il coniugato solo del primo numero che viene scritto nel main" << std::endl;
    std::cout << "Coniugato di c1: " << c1.coniugato() << std::endl;

    return 0;
}

