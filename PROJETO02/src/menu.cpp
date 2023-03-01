#include "Menu.h"
#include "EletraEnergySolutions.h"
#include "medidor.h"
#include <iostream>
#include <string>

void Menu::menu_seletor()
{
    std::cout << "\n1.ZEUS\n2.ARES\n3.CRONOS\n4.APOLO\n5.VOLTAR AO MENU\n"<< std::endl;
    std::cout << "ESCOLHA A LINHA QUE DESEJA ALTERAR" << std::endl;
}
void Menu::menu_insercao()
{
    std::cout << "DIGITE O MODELO QUE DESEJA INSERIR NA LINHA ESCOLHIDA" << std::endl;
}
void Menu::menu_de_introducao()
{
    std::cout << "Bem vindo ao menu de adição de medidores" << std::endl;
    std::cout << "Primeiro selecione uma linha para adicionar medidor" << std::endl;
    std::cout << "Depois insira o modelo e ID" << std::endl;
}
void Menu::menu_seperador()
{
    std::cout << "##############################################################" << std::endl;
}

auto Menu::get_seletor(int n) -> Seletor
{
    switch (n)
    {
    case 1:
        return Seletor::ZEUS;
    case 2:
        return Seletor::ARES;
    case 3:
        return Seletor::CRONOS;
    case 4:
        return Seletor::APOLO;
    case 5:
        return Seletor::SAIR;
    }
    return Seletor::UNKNOWN;
}

auto Menu::get_action(int n) -> Action
{
    switch (n)
    {
    case 1:
        return Action::LINES;
    case 2:
        return Action::ENERGY_METERS;
    case 3:
        return Action::ARES_METERS;
    case 4:
        return Action::APOLO_METERS;
    case 5:
        return Action::CRONOS_METERS;
    case 6:
        return Action::ZEUS_METERS;
    case 7:
        return Action::ADD_METER;
    case 8:
        return Action::DELETE_METER;
    case 9:
        return Action::EXIT;
    }
    return Action::UNKNOWN;
}

void Menu::menu_start()
{
    std::cout<<"Bem vindo ao Console de informações da eletra"<<std::endl;
    std::cout<<"Aqui vc tem acesso a diversas informações sobre a Eletra Energy Solutions"<<std::endl;
    std::cout<<"Escolha uma das opções para acessar"<<std::endl;
    std::cout<<"1 - Conheça as Linhas"<<std::endl;
    std::cout<<"2 - Conheça todos os Medidores de energia"<<std::endl;
    std::cout<<"3 - Conheça os Medidores de energia da linha ARES"<<std::endl;
    std::cout<<"4 - Conheça os Medidores de energia da linha APOLO"<<std::endl;
    std::cout<<"5 - Conheça os Medidores de energia da linha CRONOS"<<std::endl;
    std::cout<<"6 - Conheça os Medidores de energia da linha ZEUS"<<std::endl;
    std::cout<<"7 - Adicione um ou mais Medidores de energia na linha "<<std::endl;
    std::cout<<"8 - Exclua um ou mais Medidores de energia na linha "<<std::endl;
    std::cout<<"9 - Sair do console"<<std::endl;
}

void Menu::menu_decision()
{
    std::cout<<"1 - Conheça as Linhas"<<std::endl;
    std::cout<<"2 - Conheça todos os Medidores de energia"<<std::endl;
    std::cout<<"3 - Conheça os Medidores de energia da linha ARES"<<std::endl;
    std::cout<<"4 - Conheça os Medidores de energia da linha APOLO"<<std::endl;
    std::cout<<"5 - Conheça os Medidores de energia da linha CRONOS"<<std::endl;
    std::cout<<"6 - Conheça os Medidores de energia da linha ZEUS"<<std::endl;
    std::cout<<"7 - Adicione um ou mais Medidores de energia na linha "<<std::endl;
    std::cout<<"8 - Exclua um ou mais Medidores de energia na linha "<<std::endl;
    std::cout<<"9 - Sair do console"<<std::endl;
}

void Menu::menu_lines()
{
    system("cls");
    std::cout<<"Os medidores de energia são divididos em 4 linhas"<<std::endl;
    std::cout<<"Linha ZEUS - de medidores inteligentes"<<std::endl;
    std::cout<<"Linha ARES - de medidores comerciais e industriais"<<std::endl;
    std::cout<<"Linha APOLO - de medidores residenciais"<<std::endl;
    std::cout<<"Linha CRONOS - de medidores residenciais"<<std::endl;
}

void Menu::menu_indicador()
{
    std::cout << "#####  ID  #########  LINE  #########  MODELO  ##############" << std::endl;
}

void Menu::menu_warning()
{
    std::cout<<"\nA INFORMAÇÃO INSERIDA É INVÁLIDA!!!\n"<<std::endl;
}

void Menu::menu_delete()
{
    std::cout<<"Deseja deletar algum medidor da lista ? "<<std::endl;
    std::cout<<"Caso queira voltar ao menu, digite fim:"<<std::endl;
}

void Menu::menu_info_delete()
{
    std::cout<<"Digite o id que deseja deletar: "<<std::endl;
}

void Menu::menu_start_choice()
{
    std::cout<<"Escolha uma ação baseada no seu numero para começar"<<std::endl;
}

void Menu::menu_meter_info(const std::string &meter_name)
{
    std::cout<<"Segue a lista com os medidores " + meter_name +", seus modelos e os IDs"<<std::endl;
}

void Menu::menu_meters_info()
{
    std::cout<<"Segue a lista com todas as linhas de medidores, seus modelos e os IDs"<<std::endl;
}

auto Menu::get_int_by_terminal() -> int
{
    int n;
    std::cin>>n;
    if(std::cin.fail())
    {
        std::cin.clear();
    }
    return n;
}

std::string Menu::get_string_by_terminal()
{
    std::string word;
    std::cin>>word;
    if (std::cin.fail())
    {
        std::cin.clear();
    }
    return word;
}
