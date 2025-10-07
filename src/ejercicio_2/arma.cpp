#include "arma.h"

ej2::Arma::Arma(std::string nombre, float danio)
    :m_Nombre(nombre), m_Danio(danio)
{
}

float ej2::Arma::GetDanio() const
{
    return m_Danio;
}

void ej2::Arma::MostrarInfo() const
{
    std::cout << "Nombre Arma: " << m_Nombre << "\n";
    std::cout << "Danio Arma: " << m_Danio << "\n";
}
