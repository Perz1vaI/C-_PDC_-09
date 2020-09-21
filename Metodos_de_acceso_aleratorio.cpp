#include <fstream>
#include <cstdlib>
#include <iostream>
#include "Metodos_de_acceso_aleratorio.hpp"


void Metodos_de_acceso_aleratorio::escribir_o_leer(fstream &fcont, bool Escribir)
{
    for (int i = 0; i < 6; ++i)
        if (Escribir)
        {
            Contacto cont("FALTA TELEFONO", "Nombre " + to_string(i), i);
            fcont.write(reinterpret_cast<const char *>(&cont), sizeof(Contacto));
        }
        else
        {
            Contacto cont;
            fcont.seekp(i * sizeof(Contacto));
            fcont.read(reinterpret_cast<char *>(&cont), sizeof(Contacto));
            cout << cont.obtenerId() << ":" << cont.obtenerNombre() << endl;
        }
}

void Metodos_de_acceso_aleratorio::leer_el_3(fstream &fcont, Contacto &cont)
{
    fcont.seekp(3 * sizeof(Contacto));
    fcont.read(reinterpret_cast<char *>(&cont), sizeof(Contacto));
    cout << cont.obtenerId() << ":" << cont.obtenerNombre() << endl;
}
void Metodos_de_acceso_aleratorio::escribir_el_3(fstream &fcont, Contacto &cont)
{
    // INSERTAR CÓDIGO AQUÍ
    // INSERTAR CÓDIGO AQUÍ
    cont.establecerNombre("NOMBRE 5 -> 5000");
    fcont.write(reinterpret_cast<const char *>(&cont), sizeof(Contacto));
}

void Metodos_de_acceso_aleratorio::cambios(fstream &fcont)
{
    Contacto cont;
    leer_el_3(fcont, cont);
    escribir_el_3(fcont, cont);
    leer_el_3(fcont, cont);
}