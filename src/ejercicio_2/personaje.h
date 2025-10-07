#pragma once

#include <iostream>
#include "arma.h"

namespace ej2
{
    class Personaje
    {
        private:
            std::string m_Nombre;
            float m_Vida;
    
        public:
            Arma* TArma;
            Personaje(std::string nombre, float vidaInicial);
            void Atacar(const Personaje& atacante);
            void MostrarEstado() const;
    };
} // namespace ej2
