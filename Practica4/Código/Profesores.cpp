#include "Profesor.h"

using namespace std;

void BajaProfesor(){
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
