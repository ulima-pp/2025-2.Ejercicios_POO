#include <iostream>
#include "ejercicio_1/libro.h"
#include "ejercicio_1/usuario.h"
#include "ejercicio_2/arma.h"
#include "ejercicio_2/personaje.h"

void EjecutarEjercicio1()
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
}

void EjecutarEjercicio2()
{
    ej2::Arma espada("Espada", 10.f);
    ej2::Arma arco("Arco", 7.f);

    ej2::Personaje guerrero("Guerrero", 50.f);
    ej2::Personaje arquero("Arquero", 40.f);

    guerrero.TArma = &espada;
    arquero.TArma = &arco;

    guerrero.Atacar(arquero);
    guerrero.MostrarEstado();

    guerrero.Atacar(arquero);
    guerrero.MostrarEstado();

    guerrero.Atacar(arquero);
    guerrero.MostrarEstado();
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "No ha enviado parametros o hay mas de lo que se pide." << "\n";
        return 1;
    }

    std::string parametro1 = argv[1];
    if (parametro1 == "1")
    {
        EjecutarEjercicio1();
    }else if (parametro1 == "2")
    {
        EjecutarEjercicio2();
    } else {
        std::cerr << "Numero de ejercicio invalido." << "\n";
        return 1;
    }

    return 0;
}