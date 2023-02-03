#include "string"
#include<iostream>

class MedidoresDeAgua
{
    public:
    void display_medidores_de_agua()
    {
        std::cout<<Zlink_Line<<std::endl;
    }
    void display_linha_zlink()
    {
        std::cout<<Ultra_hidro<<std::endl;
    }
    private:
    const std::string Zlink_Line = "Linha Zlink";
    const std::string Ultra_hidro = "Hidrômetros Ultrasôicos";
};