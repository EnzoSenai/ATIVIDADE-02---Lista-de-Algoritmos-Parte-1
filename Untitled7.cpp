#include <iostream>

int main() {
    double celsius;
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;
    
    double fahrenheit = (celsius * 9/5) + 32;
    std::cout << "A temperatura em Fahrenheit é: " << fahrenheit << std::endl;
    return 0;
}
