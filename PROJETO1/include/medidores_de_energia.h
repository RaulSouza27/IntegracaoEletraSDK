#include "string"
#include <iostream>

class MedidoresDeEnergia
{
public:
    void display_medidores_de_energia()
    {
        std::cout << zeus_line << std::endl;
        std::cout << apolo_line << std::endl;
        std::cout << ares_line << std::endl;
        std::cout << cronos_line << std::endl;
    }
    void display_linha_zeus()
    {
        std::cout << "Zeus 8021" << std::endl;
        std::cout << "Zeus 8031" << std::endl;
        std::cout << "Zeus 8023" << std::endl;
    }
    void display_linha_ares()
    {
        std::cout << "Ares 7021" << std::endl;
        std::cout << "Ares 7031" << std::endl;
        std::cout << "Ares 7023" << std::endl;
        std::cout << "Ares 8023" << std::endl;
        std::cout << "Ares 8023 15" << std::endl;
        std::cout << "Ares 8023 200" << std::endl;
    }
    void display_linha_cronos()
    {
        std::cout << "Cronos 6001-A" << std::endl;
        std::cout << "Cronos 6021-A" << std::endl;
        std::cout << "Cronos 6021L" << std::endl;
        std::cout << "Cronos 6003" << std::endl;
        std::cout << "Cronos 7023" << std::endl;
        std::cout << "Cronos 7023-L" << std::endl;
        std::cout << "Cronos 7023 2,5" << std::endl;
    }
    void display_linha_apolo()
    {
        std::cout << "Apolo 6031" << std::endl;
    }

private:
    const std::string zeus_line = "Linhas Zeus";
    const std::string apolo_line = "Linha Apolo";
    const std::string ares_line = "Linha Ares";
    const std::string cronos_line = "Linha Cronos";

};