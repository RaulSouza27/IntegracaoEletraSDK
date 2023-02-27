#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> lista;
    std::string input;

    std::cout << "Insira as informações para adicionar à lista (digite 'fim' para sair):\n";

    while (std::getline(std::cin, input))
    {
        if (input == "fim") break;
        lista.push_back(input);
    }

    std::cout << "\nAs informações armazenadas na lista são:\n";

    for (const auto& item : lista)
    {
        std::cout << item << std::endl;
    }

    return 0;
}