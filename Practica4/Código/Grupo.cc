#include "Grupo.h"
##include "Alumno.h"

using namespace std;

void Grupo:: BorrarGrupo(int NumGrupo){

ListaAlumnos Alumnos;
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios:binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
            if(Alumnos.Grupo_==NumGrupo){
                setGrupo(NULL);
            }
          }
        }
      }
      else{
        cout<<"El fichero no se abrió correctamente"<<endl;
      }
}

void Grupo:: mostrarGrupo(int NumGrupo){
  ListaAlumnos Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios:binary);
        if(entrada.is_open()){
          while(getline(entrada,linea, ' ')){
              if(Alumnos.Grupo_==NumGrupo){
                cout<<linea<<endl;
              }
            }
          }
        }
        else{
              cout<<"El fichero no se abrió correctamente"<<endl;
        }
}

void Grupo:: borrarIntegrante(string DNI, int NumGrupo){
  ListaAlumnos Alumnos;
    string linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios:binary);
        if(entrada.is_open()){
          while(getline(entrada,linea, ' ')){
            if(Alumnos.DNI==DNI){
                Alumnos.Grupo_==NULL;
            }
          }
        }
    else{
      cout<<"El fichero no se abrió correctamente"<<endl;
    }
}
