#include <iostream>
#include <cmath> // Para M_PI

int main() {
    double raio;
    std::cout << "Digite o raio do c�rculo: ";
    std::cin >> raio;
    
    double area = M_PI * raio * raio;
    std::cout << "A �rea do c�rculo �: " << area << std::endl;
    return 0;
}
