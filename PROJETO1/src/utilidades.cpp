#include "utilidades.h"

#include <iostream>

void print_vetores_string(std::vector<std::string> vetor_de_strings)
{
    for(int i=0;i<vetor_de_strings.size();i++)
    {
        std::cout<<vetor_de_strings[i]<<std::endl;
    }
}


