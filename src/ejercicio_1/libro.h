#pragma once

#include <iostream>

namespace ej1
{
    class Libro
    {
        private:
            std::string m_Titulo;
            std::string m_Autor;
            unsigned int m_AnioPublicacion;
            static unsigned int totalLibros;
    
        public:
            Libro(std::string titulo, std::string autor, unsigned int anio);
            ~Libro();
            void MostrarInfo();
            static void MostrarTotalLibros();
    };
}