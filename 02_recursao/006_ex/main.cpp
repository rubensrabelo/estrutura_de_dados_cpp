// Descobrir se uma palavra é um palindromo - Exemplo transcrito do slide

#include<iostream>

bool ehPalindromo(std::string palavra, int ini, int fim);

int main() {
    std::string str = "macarrao";

    bool result = ehPalindromo(str, 0, str.length() - 1);

    std::cout << "A palavra " << str << "eh palindromo? " << result << std::endl;

    return 0;
}

bool ehPalindromo(std::string palavra, int ini, int fim) {
    if (ini >= fim)
        return true;
    return (palavra[ini] == palavra[fim]) && ehPalindromo(palavra, ini + 1, fim - 1);
}