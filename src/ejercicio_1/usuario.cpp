#include "usuario.h"

ej1::Usuario::Usuario(std::string nombre, size_t id)
    :m_IdUsuario(id), m_Nombre(nombre), LibroPrestado(nullptr)
{
}

void ej1::Usuario::PrestarLibro(Libro& libro)
{
    LibroPrestado = &libro;
}

void ej1::Usuario::DevolverLibro()
{
    LibroPrestado = nullptr;
}

void ej1::Usuario::MostrarInfo()
{
    std::cout << "Nombre Usuario: " << m_Nombre << "\n";
    if (LibroPrestado != nullptr)
    {
        LibroPrestado->MostrarInfo();
    }else 
    {
        std::cout << "No tiene libro prestado" << "\n";
    }
}
