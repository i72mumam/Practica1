
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"

using namespace std;

Alumno aux;

bool Agenda::InsertarAlumno(string DNI){
ListaAlumnos Alumnos;
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
      while(getline(entrada,linea, ' ')){
        if(Alumnos.DNI_==DNI){
          cout<<" El alumno ya existe"<<endl;

 	return false;
        }
      else {
        cout<<"El alumno se guarda en la base de datos"<<endl;
  return true;
}
}
}
void Agenda::BorrarAlumno(string DNI){
  ListaAlumnos Alumnos;
  string linea;
   ifstream entrada;
   entrada.open("Alumnos.bin", ios::in| ios::binary);
     if(entrada.is_open()){
       while(getline(entrada,linea, ' ')){
           if(Alumnos.DNI_==DNI){
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
        if(Alumnos.DNI_==DNI){
          aux.SetDNI(NULL);
        }
        if(Alumnos.NombreCompleto_==NombreCompleto){
          aux.SetNombreCompleto(NULL);
        }
        if(Alumnos.Edad_==Edad){
          aux.SetEdad(NULL);
        }
        if(Alumnos.Email_==Email){
          aux.SetEmail(NULL);
        }
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
        if(Alumnos.DNI_==DNI){
            cout<<linea<<endl;
        }
        else{
            cout<<"El alumno no existe"<<endl;
    }
    }
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
          if(Alumnos.DNI_==DNI){
              cin>>datos_modificar;
              switch(datos_modificar){
                case 1:
                  cout<<"Introducir nuevo DNI"<<endl;
                  cin>>DNI;
                break;
                case 2:
                  cout<<"Introducir nuevo Email"<<endl;
                  cin>>Email_;
                break;
                case 3:
                  cout<<"Introducir nuevo NombreCompleto"<<endl;
                  cin>> NombreCompleto_;
                break;
                case 4:
                  cout<<"Introducir nueva Edad"<<endl;
                  cin>>Edad_;
                  break;
              }
          }
          else{
              cout<<"No se encuentra el alumno"<<endl;
          }
      }
   }
   else{
        cout<<"Error al abrir el fichero"<<endl;
   }
 }
