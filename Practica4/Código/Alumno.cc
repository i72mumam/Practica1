
#include "Alumno.h"

bool Agenda::ExisteAlumno(string DNI){
ListaAlumnos Alumnos;
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios:binary);
      while(getline(entrada,linea, ' ')){
        if(Alumnos.DNI_==DNI){
          cout<<" El alumno ya existe"<<endl;
 	fich.close();
 	return false;
        }
      else {
        cout<<"El alumno se guarda en la base de datos"<<endl;
  return true;
}
