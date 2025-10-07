#include "libro.h"

ej1::Libro::Libro(std::string titulo, std::string autor, unsigned int anio)
    : m_Titulo(titulo), m_Autor(autor), m_AnioPublicacion(anio)
{
    Libro::totalLibros++;
}

ej1::Libro::~Libro()
{
    Libro::totalLibros--;
}

void ej1::Libro::MostrarInfo()
{
    std::cout << "Nombre: " << m_Titulo << "\n";
    std::cout << "Autor: " << m_Autor << "\n";
    std::cout << "Anio Publicacion: " << m_AnioPublicacion << "\n";
}

void ej1::Libro::MostrarTotalLibros()
{
    std::cout << "Total Libros: " << Libro::totalLibros << "\n";
}

unsigned int ej1::Libro::totalLibros = 0;
