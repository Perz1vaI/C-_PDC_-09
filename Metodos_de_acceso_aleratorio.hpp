#include <fstream>
#include <cstdlib>
#include "Contacto.hpp"
#pragma once
class Metodos_de_acceso_aleratorio
{
    public:
    void escribir_o_leer(fstream &fcont, bool Escribir);
    void leer_el_3(fstream &fcont, Contacto &cont);
    void cambios(fstream &fcont);
    void escribir_el_3(fstream &fcont, Contacto &cont);
};
