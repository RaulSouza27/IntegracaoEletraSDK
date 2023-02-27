#include "menus.h"
#include <iostream>
#include <string>

void Menus::menu_seletor()
{
    std::cout << "\n1.ZEUS\n2.ARES\n3.CRONOS\n4.APOLO\n5.VOLTAR AO MENU\n"<< std::endl;
    std::cout << "ESCOLHA A LINHA QUE DESEJA ALTERAR" << std::endl;
}
void Menus::menu_insercao()
{
    std::cout << "DIGITE O MODELO QUE DESEJA INSERIR NA LINHA ESCOLHIDA" << std::endl;
}
void Menus::menu_de_introducao()
{
    std::cout << "Bem vindo ao menu de adição ou exclusão de medidores" << std::endl;
    std::cout << "Primeiro selecione uma linha para adicionar medidor" << std::endl;
    std::cout << "Depois insira o modelo e ID" << std::endl;
}
void Menus::menu_seperador()
{
    std::cout << "##############################################################" << std::endl;
}

void Menus::menu_de_id()
{
    std::cout << "DIGITE O ID DESTE MEDIDOR" << std::endl;
}

auto Menus::get_seletor(int n) -> Seletor
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

auto Menus::get_action(int n) -> Action
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

void Menus::menu_action()
{
    int z;
    std::cin >> z;
    Action n = get_action(z);
}

void Menus::menu_choice()
{
    int nn = 0;
    std::cin >> nn;
    Seletor n = get_seletor(nn);
}

void Menus::menu_start()
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

void Menus::menu_decision()
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

void Menus::menu_lines()
{
    system("cls");
    std::cout<<"Os medidores de energia são divididos em 4 linhas"<<std::endl;
    std::cout<<"Linha ZEUS - de medidores inteligentes"<<std::endl;
    std::cout<<"Linha ARES - de medidores comerciais e industriais"<<std::endl;
    std::cout<<"Linha APOLO - de medidores residenciais"<<std::endl;
    std::cout<<"Linha CRONOS - de medidores residenciais"<<std::endl;
}

void Menus::menu_indicador()
{
    std::cout << "###################################################" << std::endl;
    std::cout << "#####  ID    #   LINE    #   MODELO  ##############" << std::endl;
    std::cout << "###################################################" << std::endl;
}

auto Menus::get_action_add_meter(int &decision) -> int
{
    std::cin>>decision;
    return decision;
}

void Menus::menu_warning()
{
    std::cout<<"\nA INFORMAÇÃO INSERIDA É INVÁLIDA!!!\n"<<std::endl;
}

void Menus::menu_delete()
{
    std::cout<<"Deseja deletar algum medidor da lista ? "<<std::endl;
    std::cout<<"Caso queira parar, digite fim:"<<std::endl;
}

void Menus::menu_info_delete()
{
    std::cout<<"Digite o id que deseja deletar: "<<std::endl;
}

void Menus::menu_start_choice()
{
    std::cout<<"Escolha uma ação baseada no seu numero para começar"<<std::endl;
}

void Menus::menu_zeus_info()
{
    std::cout<<"Segue a lista com os medidores ZEUS, seus modelos e os IDs"<<std::endl;
}

void Menus::menu_cronos_info()
{
    std::cout<<"Segue a lista com os medidores CRONOS, seus modelos e os IDs"<<std::endl;
}

void Menus::menu_apolo_info()
{
    std::cout<<"Segue a lista com os medidores APOLO, seus modelos e os IDs"<<std::endl;
}

void Menus::menu_ares_info()
{
    std::cout<<"Segue a lista com os medidores ARES, seus modelos e os IDs"<<std::endl;
}

void Menus::menu_meters_info()
{
    std::cout<<"Segue a lista com todas as linhas de medidores, seus modelos e os IDs"<<std::endl;
}
