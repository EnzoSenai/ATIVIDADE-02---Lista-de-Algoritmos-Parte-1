#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    
    double soma = num1 + num2;
    std::cout << "A soma é: " << soma << std::endl;
    return 0;
}
