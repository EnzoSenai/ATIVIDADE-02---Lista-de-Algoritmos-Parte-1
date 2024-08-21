#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;
    
    if (numero < 0) {
        std::cout << "O número deve ser positivo." << std::endl;
        return 1;
    }
    
    long long fatorial = 1;
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }
    
    std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;
    return 0;
}
