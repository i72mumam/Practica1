#ifndef PROFESOR_H
#define PROFESOR_H


#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;



class Profesor : public Persona{    //Declaramos la clase Profesor

private:                            //Declaramos la parte privada de la clase Profesor y sus variables
  string Credencial_;
  int Rol_;
  string Usuario_;

public:                             //Declaramos la parte pública de la clase Profesor
    Profesor(){}                    //Creamos un constructor vacío para poder realizar las funciones más adelante

    Profesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol):    //Creamos un constructor con las variables que pertenecen a la clase Profesor
          Persona(DNI, Nombre, Apellido1, Apellido2, Edad, Email){      //Igualamos las variables privadas con las variables declaradas en el constructor
                Usuario_=Usuario;
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial){Credencial_=Credencial;};    //Función que modifica el valor de la variable Credencial
inline string GetCredencial(){ return Credencial_;};                      //Función que devuelve el valor de la variable Credencial

inline void setRol(bool Rol){Rol_=Rol;};                                  //Función que modifica el valor de la variable Rol
inline int getRol(){return Rol_;};                                        //Función que devuelve el valor de la variable Credencial

void AccederSistema(string Usuario, string Credencial);           //Función para poder acceder al sistema
void AltaProfesor(string DNI,string NombreCompleto,string Email); //Función que da de alta a un Profesor
void BajaProfesor(string DNI);                                    //Función que da de baja a un Profesor
void CrearBackup();                                               //Función que crea una copia de seguridad
void CargarBackup();                                              //Función que ejecuta la copia de seguridad
void menuCoordinador();                                           //Función que muestra un menu para el coordinador
void menuAyudante();                                              //Función que ejecuta un menu para el ayudante
};

#endif
