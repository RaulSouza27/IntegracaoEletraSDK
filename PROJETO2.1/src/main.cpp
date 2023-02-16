#include "criador.h"
#include "criador_de_zeus.h"
#include "criador_de_ares.h"
#include "criador_de_cronos.h"
#include "medidor_de_energia.h"
#include <iostream>
#include <string>

void ClientCode(const Creator& creator) 
{
  // ...
  std::cout << "Client: Olha eu aqui funcionando.\n"
            << creator.SomeOperation() << std::endl;
  // ...
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */

int main() 
{
    std::cout << "App: criamos o medidor Zeus.\n";
    Creator* creator = new ConcreteCreatorAres();
    ClientCode(*creator);
    std::cout << "App: criamos o medidor Ares.\n";
    Creator* creator2 = new ConcreteCreatorZeus();
    ClientCode(*creator2);
    std::cout << "App: criamos o medidor Cronos.\n";
    Creator* creator3 = new ConcreteCreatorCronos();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    delete creator3;
    return 0;
}