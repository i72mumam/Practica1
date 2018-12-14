
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"
#include <fstream>

using namespace std;

Alumno aux;

void Agenda::InsertarAlumno(string DNI){
ListaAlumnos Alumnos;
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if((linea.c_str()==DNI)){
          cout<<" El alumno ya existe"<<endl;


        }
      else {
        entrada>> linea;
        cout<<"El alumno se guarda en la base de datos"<<endl;

}
}
  entrada.close();
}
else{
  cout<<"Error al abrir el fichero"<<endl;
}
}
void Agenda::BorrarAlumno(string DNI){
  ListaAlumnos Alumnos;
  string linea;
   ifstream entrada;
   entrada.open("Alumnos.bin", ios::in| ios::binary);
     if(entrada.is_open()){
       while(getline(entrada,linea, ' ')){
           if((linea.c_str())==DNI){
               aux.SetDNI(NULL);
           }
       }
     }
     else{
     cout<<"El fichero no se abrió correctamente"<<endl;
}
}
void Agenda::BorrarTodosAlumnos(){
  ListaAlumnos Alumnos;
  string linea;
  ifstream entrada;
  string DNI;
  string NombreCompleto;
  int Edad;
  string Email;
  entrada.open("Alumnos.bin",ios::in| ios::binary);
  if(entrada.is_open()){
    while(getline(entrada,linea,' ')){
        if((linea.c_str())==DNI){
          aux.SetDNI(NULL);
        }
        if((linea.c_str())==NombreCompleto){
          aux.SetNombreCompleto(NULL);
        }
        if(atoi(linea.c_str())==Edad){
          aux.SetEdad(NULL);
        }
        if((linea.c_str())==Email){
          aux.SetEmail(NULL);
        }
        entrada.close();
    }
  }
    else{
      cout<<"El fichero no se abrió correctamente"<<endl;
  }
}
void Agenda::MostrarAlumno(string DNI){
  ListaAlumnos Alumnos;
  string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin",ios::in|ios::binary);
  if(entrada.is_open()){
    while(getline(entrada,linea,' ')){
        if((linea.c_str())==DNI){
            cout<<linea<<endl;
        }
        else{
            cout<<"El alumno no existe"<<endl;
    }
    }
        entrada.close();
    }
    else{
        cout<<"Error al abrir el fichero"<<endl;
  }
}
 void Agenda::ModificarAlumno(string DNI){
   ListaAlumnos Alumnos;
   int datos_modificar;
   string Email_;
   int Edad_;
   string NombreCompleto_;
   string linea;
   ifstream entrada;
   entrada.open("Alumnos.bin",ios::in|ios::binary);
   if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
          if((linea.c_str())==DNI){
              cin>>datos_modificar;
              switch(datos_modificar){
                case 1:
                  cout<<"Introducir nuevo DNI"<<endl;
                  cin>>DNI;
                  entrada>>DNI;
                break;
                case 2:
                  cout<<"Introducir nuevo Email"<<endl;
                  cin>>Email_;
                  entrada>>Email_;
                break;
                case 3:
                  cout<<"Introducir nuevo NombreCompleto"<<endl;
                  cin>> NombreCompleto_;
                  entrada>>NombreCompleto_;
                break;
                case 4:
                  cout<<"Introducir nueva Edad"<<endl;
                  cin>>Edad_;
                  entrada>>Edad_;
                  break;
              }
          }
          else{
              cout<<"No se encuentra el alumno"<<endl;
          }
      }
        entrada.close();
   }
   else{
        cout<<"Error al abrir el fichero"<<endl;
   }
 }
