#pragma once
#include <iostream>

class Controle
{
    public:
        void control_code();
        void get_Set();
        void get_prod();
        void get_desc();
        void displaymessage(){}
    private:
        int select;
        int prod;
        int desc;
};