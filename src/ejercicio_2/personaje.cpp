#include "personaje.h"

ej2::Personaje::Personaje(std::string nombre, float vidaInicial)
    :m_Nombre(nombre), m_Vida(vidaInicial), TArma(nullptr)
{
}

void ej2::Personaje::Atacar(const Personaje& atacante)
{
    if (TArma != nullptr)
    {
        auto danio = atacante.TArma->GetDanio();
        m_Vida -= danio;
    }
}

void ej2::Personaje::MostrarEstado() const
{
    std::cout << "Nombre Personaje: " << m_Nombre << "\n";
    std::cout << "Vida restante: " << m_Vida << "\n";
    TArma->MostrarInfo();
    std::cout << "\n";
}
