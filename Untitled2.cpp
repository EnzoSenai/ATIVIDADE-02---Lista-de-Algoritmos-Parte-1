#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    
    double soma = num1 + num2;
    std::cout << "A soma �: " << soma << std::endl;
    return 0;
}
