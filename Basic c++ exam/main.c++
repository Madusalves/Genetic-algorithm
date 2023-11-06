#include <iostream>

int main() {
    int soma = 0;
            
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    std::cout << "A soma dos 100 primeiros números naturais é: " << soma << std::endl;

    return 0;
}
