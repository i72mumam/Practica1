#include "Grupo.h"
#include "Alumno.h"
#include "Agenda.h"

using namespace std;

void Grupo:: BorrarGrupo(int NumGrupo){

ListaAlumnos Alumnos;
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
            if(Alumnos.Grupo_==NumGrupo){
              Alumno a;
              a.SetGrupo(0);
            }
          }
        }

      else{
        cout<<"El fichero no se abrió correctamente"<<endl;
      }
}

void Grupo:: MostrarGrupo(int NumGrupo){
  ListaAlumnos Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios::binary);
        if(entrada.is_open()){
          while(getline(entrada,linea, ' ')){
              if(Alumnos.Grupo_==NumGrupo){
                cout<<linea<<endl;
              }
            }
          }

        else{
              cout<<"El fichero no se abrió correctamente"<<endl;
        }
}

void Grupo:: BorrarIntegrante(string DNI, int NumGrupo){
  ListaAlumnos Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios::binary);
        if(entrada.is_open()){
          while(getline(entrada,linea, ' ')){
            if(Alumnos.DNI_==DNI){
                Alumnos.Grupo_==0;
            }
          }
        }
    else{
      cout<<"El fichero no se abrió correctamente"<<endl;
    }
}
