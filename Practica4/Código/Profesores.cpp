#include "Profesor.h"

using namespace std;

Profesor aux;

void Profesor:: BajaProfesor(string DNI){
  Listaprofesores Lista;
  string linea;
  ifstream entrada;
    entrada.open("Profesores.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
          if((linea.c_str())==DNI){
              aux.SetDNI(NULL);
          }
          else{
              cout<<"No existe el profesor"<<endl;
          }
      }
    }
      else{
            cout<<"Error al abrir el fichero"<<endl;
    }
}
  void Profesor:: AltaProfesor(string DNI,string NombreCompleto,string Email){
    Listaprofesores Lista;
    string Credencial;
    int Rol;
    string linea;
    ifstream entrada;
    entrada.open("Profesores.h", ios::in | ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
          aux.GetCredencial();
          aux.getRol();
        }

      }
      else{
          cout<<"Error al abrir el fichero"<<endl;
      }
    }
