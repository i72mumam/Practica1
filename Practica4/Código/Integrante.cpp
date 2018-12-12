#include "Grupo.h"
#include "Alumno.h"
#include "Persona.h"

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
 void Grupo:: modificalider(string DNI,int NumGrupo){
   ListaAlumnos Alumnos;
    string Lider_Grupo;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in|ios::binary);
      if(entrada.is_open()){
          while(getline(entrada,linea,' ')){
              if(Alumnos.DNI==DNI)&&(Grupo.NumGrupo==NumGrupo){
                    void setLider(string Lider_Grupo){
                      Lider_Grupo_=DNI; }
                    }
                    else{
                        cout<<"Error al abrir el fichero"<<endl;
                    }
              }
          }
