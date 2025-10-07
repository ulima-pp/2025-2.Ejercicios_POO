#pragma once

#include <iostream>

namespace ej2
{
    class Arma
    {
        private:
            std::string m_Nombre;
            float m_Danio;
    
        public:
            Arma(std::string nombre, float danio);
            float GetDanio() const;
            void MostrarInfo() const;
    };
}