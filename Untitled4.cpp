#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;
    
    if (num1 > num2) {
        std::cout << "O maior n�mero �: " << num1 << std::endl;
    } else {
        std::cout << "O maior n�mero �: " << num2 << std::endl;
    }
    return 0;
}
