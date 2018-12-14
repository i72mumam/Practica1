#include "Agenda.h"
#include "Persona.h"


//Mostrar Alumno
void Agenda::MostrarAlumno(string DNI){
string linea;       //Declaramos un string para leer los datos
  ifstream entrada; //Declaramos el fichero
  entrada.open("Alumnos.bin", ios::in| ios::binary); //Abrimos el fichero binario
    if(entrada.is_open()){    //Comprobamos si el fichero está abierto
      while(getline(entrada,linea, ' ')){  //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
        if(linea=DNI){                    //Si el DNI introducido corresponde con algún DNI en el fichero se muestra el alumno por pantalla
            cout<<linea<<' ';
        getline(entrada,linea, ' ');
          cout<<linea<<' ';
        getline(entrada,linea, ' ');
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
    entrada.close();       //Se cierra el fichero
    }
    else{             //Si no está abierto el fichero
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


//Mostrar todos los alumnos
void Agenda::MostrarTodosAlumnos(){
  string linea;   //Declaramos un string para leer los datos
    ifstream entrada;   //Declaramos el fichero
    entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos el fichero binario
      if(entrada.is_open()){    //Comprobación del fichero
        while(getline(entrada,linea, ' ')){   //Mientras el fichero esté abierto se muestran por pantalla todos los alumnos
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
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
        entrada.close();      //Se cierra el fichero
      }
      else{   //Si no está abierto el fichero
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }
