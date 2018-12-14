#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;


class Alumno : public Persona{
private:
  int Grupo_;
  string Lider_;
public:

  Alumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, string Lider):
          Persona(DNI, Nombre, Apellido1, Apellido2, Edad, Email){
              Grupo_=Grupo;
              Lider_=Lider;
          }
  Alumno(){}

inline void SetGrupo(int Grupo){Grupo_=Grupo;}
inline int GetGrupo(){return Grupo_;}

inline string GetLider(){return Lider_;}                      //Función que devuelve el valor de la variable Lider_
inline void SetLider(string Lider){Lider_=Lider; }             // Funcion que modifica el valor de la variable Lider_


};

#endif
