#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um n�mero para exibir a tabuada: ";
    std::cin >> numero;
    
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
    }
    return 0;
}
