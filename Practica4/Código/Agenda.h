#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"
#include "Alumno.h"

using namespace std;


class Agenda : public Persona {

private:
    int Grupo_;


  public:

    Agenda(){}

    Agenda(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, bool Lider):
              Persona(DNI,Nombre, Apellido1, Apellido2 , Edad, Email){
                Grupo_=Grupo;
              };

  void MostrarAlumno(string DNI);
  void ModificarAlumno(string DNI);
  void BorrarAlumno(string DNI);
  void InsertarAlumno(string DNI);
  void MostrarTodosAlumnos();
  bool ExisteAlumno(string DNI);
  void BorrarTodosAlumnos();
};

#endif
