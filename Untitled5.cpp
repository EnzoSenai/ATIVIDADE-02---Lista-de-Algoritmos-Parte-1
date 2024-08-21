#include <iostream>

int main() {
    double num1, num2, num3;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;
    
    double media = (num1 + num2 + num3) / 3;
    std::cout << "A média é: " << media << std::endl;
    return 0;
}
