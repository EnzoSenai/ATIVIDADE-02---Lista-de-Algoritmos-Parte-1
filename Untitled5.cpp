#include <iostream>

int main() {
    double num1, num2, num3;
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro n�mero: ";
    std::cin >> num3;
    
    double media = (num1 + num2 + num3) / 3;
    std::cout << "A m�dia �: " << media << std::endl;
    return 0;
}
