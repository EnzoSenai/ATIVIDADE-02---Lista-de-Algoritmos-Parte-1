#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um n�mero: ";
    std::cin >> numero;
    
    if (numero % 2 == 0) {
        std::cout << "O n�mero � par." << std::endl;
    } else {
        std::cout << "O n�mero � �mpar." << std::endl;
    }
    return 0;
}
