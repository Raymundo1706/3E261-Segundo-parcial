#include <iostream>
#include <SerieFocos.hpp>
#include <Foco.hpp>

int main(int argc, char const *argv[])
{
    SerieFocos serie;
    Foco foquito;

    foquito.Encender();
    foquito.Apagar();

    std::cout
    << "Estado Foco: "
    << foquito.LeerEstado()
    << std::endl;

    return 0;
}