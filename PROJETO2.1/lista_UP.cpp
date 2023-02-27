#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::pair<int, std::string>> lista;
    std::string input;
    int num;

    std::cout << "Insira as informações para adicionar à lista (digite 'fim' para sair):\n";

    while (true)
    {
        std::cout << "Número: ";
        std::cin >> num;
        if (std::cin.fail()) 
        {
            std::cout << "Valor inválido! Tente novamente.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }

        std::cout << "Texto: ";
        std::cin.ignore(); 
        std::getline(std::cin, input);

        if (input == "fim")
        {
            break;
        } 
        lista.emplace_back(num, input);
    }

    std::cout << "\nAs informações armazenadas na lista são:\n";

    for (const auto& item : lista)
    {
        std::cout << item.first << ": " << item.second << std::endl;
    }
    std::cout<<"deseja excluir algum item que foi inserido? \nDigite 'SIM' para excluir"<<std::endl;
    std::string descision;
    std::getline(std::cin, descision);
    if(descision=="sim")
        {
        std::cout << "\nDigite o número do item que deseja excluir: ";
        std::cin >> num;

        for (auto it = lista.begin(); it != lista.end(); ++it)
            {
                if (it->first == num)
                {
                    lista.erase(it);
                    std::cout << "Item excluído.\n";
                    break;
                }
            }

            std::cout << "\nAs informações restantes na lista são:\n";

            for (const auto& item : lista)
            {
                std::cout << item.first << ": " << item.second << std::endl;
            }
        }
        return 0;
}