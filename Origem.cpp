#include <iostream>
#include <cstring> // Para strcmp()

// Protótipo da função
void cal();

int main() {
    char user[20], pass[20]; // Armazenamento para usuário e senha


    std::cout << R"(
.____            .__       .__                              .__        __          
|    |    _______|__| ____ |  |__   ____  ______ ___________|__|______/  |_  ______
|    |    \___   /  |/    \|  |  \ /  _ \/  ___// ___\_  __ \  \____ \   __\/  ___/
|    |___  /    /|  |   |  \   Y  (  <_> )___ \\  \___|  | \/  |  |_> >  |  \___ \ 
|_______ \/_____ \__|___|  /___|  /\____/____  >\___  >__|  |__|   __/|__| /____  >
        \/      \/       \/     \/           \/     \/         |__|             \/ 



)";


    std::cout << " [+]   WELCOME\n\n\n\n\n";
    std::cout << " [+]   USER: \n";
    std::cin >> user;

    std::cout << " [+]   PASS : \n";
    std::cin >> pass;

    if (strcmp(user, "sexo") == 0 && strcmp(pass, "cu") == 0) {
        std::cout << " [+]   Bem-vindo, gostoso!\n\n\n\n\n\n\n\n\n\n"; // Adicionando duas linhas em branco

        // Limpar a tela
        system("cls");

        // Chamada da função cal() após limpar a tela
        cal();
    }
    else {
        std::cout << "Ta errado, amigo.\n";

        system("pause");
    }

    return 0;
}

// Definição da função cal()
void cal() {
    double n1, n2;
    char op; // Variável para armazenar o operador

    std::cout << R"(
.____            .__       .__                              .__        __          
|    |    _______|__| ____ |  |__   ____  ______ ___________|__|______/  |_  ______
|    |    \___   /  |/    \|  |  \ /  _ \/  ___// ___\_  __ \  \____ \   __\/  ___/
|    |___  /    /|  |   |  \   Y  (  <_> )___ \\  \___|  | \/  |  |_> >  |  \___ \ 
|_______ \/_____ \__|___|  /___|  /\____/____  >\___  >__|  |__|   __/|__| /____  >
        \/      \/       \/     \/           \/     \/         |__|             \/ 



)";

    std::cout << " [+]   Bem vindo a calculadora \n\n\n" << std::endl;

    std::cout << " [+]   Digite o primeiro numero: \n";
    std::cin >> n1;

    std::cout << " [+]   Digite o operador (+, -, /, *): \n";
    std::cin >> op;

    std::cout << " [+]   Digite o segundo numero: \n";
    std::cin >> n2;

    double result;
    switch (op) {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '/':
        if (n2 != 0) {
            result = n1 / n2;
        }
        else {
            std::cout << " [+]   Erro: Divisao por zero!" << std::endl;
            return;
        }
        break;
    case '*':
        result = n1 * n2;
        break;
    default:
        std::cout << " [+]   Operador invalido!" << std::endl;
        return;
    }

    std::cout << " [+]   O resultado da operacao e: " << result << std::endl;

    system("pause"); // Pausa antes de fechar a janela
}
