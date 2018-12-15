#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;


class Alumno : public Persona{    //Declaramos la clase Alumno
private:    //Declaramos la parte privada de la clase y sus variables
  int Grupo_;
  string Lider_;
public:   //Declaramos la parte publica de la clase

  Alumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, string Lider):   //Creamos un constructor con las variables que pertenezcan a la clase Alumno
          Persona(DNI, Nombre, Apellido1, Apellido2, Edad, Email){    //Igualamos las variables privadas con las variables declaradas en el constructor
              Grupo_=Grupo;
              Lider_=Lider;
          }
  Alumno(){}    //Se crea un constructor vacío para poder realizar las funciones más adelante

inline void SetGrupo(int Grupo){Grupo_=Grupo;}    //Función que modifica el valor de la variable Grupo
inline int GetGrupo(){return Grupo_;}             //Función que devuelve el valor de la variable Grupo

inline string GetLider(){return Lider_;}                      //Función que devuelve el valor de la variable Lider_
inline void SetLider(string Lider){Lider_=Lider; }             // Funcion que modifica el valor de la variable Lider_


};

#endif
