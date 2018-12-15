#ifndef PROFESOR_H
#define PROFESOR_H


#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;



class Profesor : public Persona{      //Declaramos la clase Profesor

private:                              //Declaramos la parte privada de la clase y sus variables
  string Credencial_;
  int Rol_;
  string Usuario_;

public:                               //Declaramos la parte publica de la clase y sus variables
    Profesor(){}                      //Creamos un constructor vacío para utilizar mas adelante

    Profesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol):    //Creamos un constructor con las variables declaradas en la clase
          Persona(DNI, Nombre, Apellido1, Apellido2, Edad, Email){      //Igualamos las variables privadas con las variables del constructor
                Usuario_=Usuario;
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial){Credencial_=Credencial;};     //Función que modifica el valor de la variable
inline string GetCredencial(){ return Credencial_;};                      //Función que retorna el valor Credencial

inline void setRol(bool Rol){Rol_=Rol;};                                   //FUnción que modifica el valor de la variable Rol
inline int getRol(){return Rol_;};                                         //Función que devuelve el valor de la variable Rol

int AccederSistema(string Usuario, string Credencial);    //Función para acceder al sistema
void AltaProfesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol); //Función para dar de alta a un Profesor
void BajaProfesor(string DNI);    //Función para dar de baja a un profesor
void CrearBackupAlumnos();        //FUnción que crea una copia de seguridad de los ficheros de los alumnos
void CrearBackupProfesores();     //Función que crea una copia de seguridad de los ficheros de los profesores
void CargarBackupAlumnos();       //Función que carga una copia de seguridad de los alumnos
void CargarBackupProfesores();     //Función que carga una copia de seguridad de los profesores
void menuCoordinador();           //Función para un menu para el coordinador
void menuAyudante();              // Función para un menu para el ayudante
void MostrarTodosProfesores();    //Función que muestra todos los profesores
void BorrarTodosProfesores();     //FUnción que borra todos los profesores
};

#endif
