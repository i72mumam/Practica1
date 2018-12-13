#include "Profesor.h"

using namespace std;



void Profesor:: BajaProfesor(){
  Listaprofesores Lista;
  string linea;
  string DNI;
    ifstream entrada;
    entrada.open("Profesores.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
          if(Profesores.DNI_==DNI){
              setDNI(NULL);
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
    string linea;
    ifstream entrada;
    entrada.open("Profesores.h", ios::in | ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
          Profesor(string DNI,string NombreCompleto, string Email, string Credencial, int Rol){
            Credencial_=Credencial;
            Rol_=Rol;
          }
          inline void setCredencial(string Credencial_){Credencial_=Credencial;};
          inline string GetCredencial(){ return Credencial_;};

          inline void setRol(bool Rol){Rol_=Rol;};
          inline int getRol(){return Rol_;};

        }

      }
      else{
          cout<<"Error al abrir el fichero"<<endl;
      }
    }
  }
