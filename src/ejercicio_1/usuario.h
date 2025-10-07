#pragma once

#include <iostream>
#include "libro.h"

namespace ej1
{
    class Usuario
    {
        private:
            size_t m_IdUsuario;
            std::string m_Nombre;
    
        public:
            Libro* LibroPrestado;
            
            Usuario(std::string nombre, size_t id);
            void PrestarLibro(Libro& libro);
            void DevolverLibro();
            void MostrarInfo();
    };
}