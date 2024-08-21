#include <iostream>
#include <cmath> // Para M_PI

int main() {
    double raio;
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;
    
    double area = M_PI * raio * raio;
    std::cout << "A área do círculo é: " << area << std::endl;
    return 0;
}
