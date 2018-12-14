#include "Grupo.h"
#include "Alumno.h"
#include "Persona.h"
#include <fstream>

using namespace std;
Grupo aux;

bool Grupo:: AnadirIntegrante(string DNI, int NumGrupo){
  Alumno Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
            if((linea.c_str())==DNI){
            if((atoi(linea.c_str()))==NumGrupo){
                return false;
            }
          }else{
                entrada>>NumGrupo;
                entrada>>DNI;
                return true;
          }
          }
        }
            else{
                cout<<"Error al abrir el fichero"<<endl;
            }

}
 void Grupo:: ModificarLider(string DNI,int NumGrupo){
   Alumno Alumnos;
    string Lider_Grupo;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in|ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea,' ')){
              if((linea.c_str())==DNI){
                if(atoi(linea.c_str())==NumGrupo){
                  aux.setLider(DNI);


          }
        }
      }
    }
              else{
                        cout<<"Error al abrir el fichero"<<endl;

              }
              }
