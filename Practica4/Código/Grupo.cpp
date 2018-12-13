#include "Grupo.h"
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"

using namespace std;

void Grupo:: BorrarGrupo(int NumGrupo){

  Alumno aux;
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');

                if(atoi(linea.c_str())==NumGrupo){

                  aux.SetGrupo(0);
            }
          }
        }

      else{
        cout<<"El fichero no se abrió correctamente"<<endl;
      }
}

void Grupo:: MostrarGrupo(int NumGrupo){        //Funciona
  Alumno aux;
    string DNI,NombreCompleto, Email, edad, grupo, linea;
      ifstream entrada;
      entrada.open("Alumnos.bin", ios::in| ios::binary);
        if(entrada.is_open()){
          while(getline(entrada,DNI, ' ')){
            getline(entrada,NombreCompleto, ' ');
            getline(entrada,edad, ' ');
            getline(entrada,Email, ' ');
            getline(entrada,grupo,' ');
            getline(entrada,linea, '\n');
            if(atoi(grupo.c_str())==NumGrupo){
              cout<<DNI<<" ";
              cout<<NombreCompleto<<" ";
              cout<<edad<<" ";
              cout<<Email<<" ";
              cout<<grupo<<" ";


                cout<<linea<<endl;



                }

            }
        }
        else{
              cout<<"El fichero no se abrió correctamente"<<endl;
        }
}

/*void Grupo:: BorrarIntegrante(cstring DNI, int NumGrupo){
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
}*/
