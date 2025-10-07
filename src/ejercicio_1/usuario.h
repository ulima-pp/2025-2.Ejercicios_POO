#pragma once

#include <iostream>
#include "libro.h"

namespace ej1
{
    class Usuario
    {
        private:
            size_t idUsuario;
            std::string nombre;
    
        public:
            Libro* m_LibroPrestado;
            Usuario(std::string nombre, size_t id);
            void PrestarLibro(Libro& libro);
            void DevolverLibro();
            void MostrarInfo();
    };
}