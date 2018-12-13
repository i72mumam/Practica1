#include "Agenda.h"
#include "Persona.h"

void Agenda::MostrarAlumno(string DNI){ //Funciona
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if((linea.c_str())==DNI){
            cout<<linea<<' ';
        getline(entrada,linea, ' ');
          cout<<linea<<' ';
        getline(entrada,linea, ' ');
          cout<<linea<<' ';
        getline(entrada,linea, ' ');
          cout<<linea<<' ';
        getline(entrada,linea, ' ');
          cout<<linea<<' ';
        getline(entrada,linea, '\n');
          cout<<linea<<' ';
        }
      }
    entrada.close();
    }
    else{
    	cout<<" El fichero no se abrió correctamente"<<endl;
	}
}

/*bool Agenda::ExisteAlumno(string DNI){
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
}*/

void Agenda::MostrarTodosAlumnos(){     //Funciona
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, '\n');
            cout<<linea<<endl;
        }
        entrada.close();
      }
      else{
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }
