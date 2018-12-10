#include "Grupo.h"
#include "Alumno.h"

using namespace std;

bool Grupo:: AnadirIntegrante(string DNI, int NumGrupo){
  ListaAlumnos Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios:binary);
        while(getline(entrada,linea, ' ')){
            if(Alumnos.DNI==DNI)&&(Grupo.NumGrupo==NumGrupo){
                return false;
            }
            else{
                return true;
            }
        }
}
