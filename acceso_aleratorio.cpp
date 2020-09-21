#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "Contacto.hpp"
#include "Metodos_de_acceso_aleratorio.hpp"
using namespace std;

int main() {
  Metodos_de_acceso_aleratorio m;
  fstream fcont0("contactos.dat", ios::out);
  fcont0.close();
  fstream fcont("contactos.dat", ios::in | ios::out | ios::binary );
  m.escribir_o_leer(fcont, true);
  cout << "ANTES:" << endl;
  m.escribir_o_leer(fcont, false);
  cout << endl << "CAMBIOS:" << endl;
  m.cambios(fcont);
  cout << endl << "DESPUES:" << endl;
  m.escribir_o_leer(fcont, false);
}