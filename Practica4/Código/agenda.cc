#include "Agenda.h"
#include "Persona.h"

void Agenda::BuscarAlumno(string DNI){
ListaAlumnos Alumnos;
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if(Alumnos.DNI_==DNI){
         cout<<linea<<endl;
        }
      }
    entrada.close();
    }
    else{
    	cout<<" El fichero no se abrió correctamente"<<endl;
	}
}

bool Agenda::ExisteAlumno(string DNI){
ListaAlumnos Alumnos;
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if(Alumnos.DNI_==DNI){
 	entrada.close();
 	return true;
        }
      }
      }
    else {
    	cout<<" El fichero no se abrió correctamente"<<endl;
    }
return false;
}

void Agenda::MostrarTodosAlumnos(){
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
          cout<<linea<<endl;
        }
        entrada.close();
      }
      else{
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }
