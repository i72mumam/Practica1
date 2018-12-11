
#include "Alumno.h"
#include "Agenda.h"

using namespace std;


bool Agenda::InsertarAlumno(string DNI){
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
}
void Agenda::BorrarAlumno(string DNI){
  ListaAlumnos Alumnos;
  string linea;
   ifstream entrada;
   entrada.open("Alumnos.bin", ios::in| ios:binary);
     if(entrada.is_open()){
       while(getline(entrada,linea, ' ')){
           if(Alumnos.DNI_==DNI){
               setAlumno(NULL);
           }
       }
       else{
       cout<<"El fichero no se abrió correctamente"<<endl;
       }
}
