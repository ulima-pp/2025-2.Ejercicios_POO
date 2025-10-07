#include "ejercicio_1/libro.h"
#include "ejercicio_1/usuario.h"
int main()
{
    ej1::Libro l1(
        "The Design of Everyday Things",
        "Don Norman",
        2013
    );
    ej1::Libro l2(
        "AI and the Future of Education: Teaching in the Age of Artificial Intelligence",
        "Priten Shah",
        2025
    );
    ej1::Libro l3(
        "Next Life You're A Alien!",
        "Clifford Rutley",
        2017
    );

    ej1::Usuario usu1("Billy", 1);
    ej1::Usuario usu2("Pepe", 2);
    
    usu1.PrestarLibro(l1);
    usu2.PrestarLibro(l3);

    usu1.MostrarInfo();
    usu2.MostrarInfo();

    usu1.DevolverLibro();
    
    usu1.MostrarInfo();
    usu2.MostrarInfo();

    return 0;
}