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


class Agenda : public Alumno {

private:

  public:

    Agenda(){}

    Agenda(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, string Lider):
              Alumno(DNI,Nombre, Apellido1, Apellido2 , Edad, Email, Grupo, Lider){

              };

  void MostrarAlumno(string DNI);
  void ModificarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo);
  void BorrarAlumno(string DNI);
  void InsertarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo);
  void MostrarTodosAlumnos();
  bool ExisteAlumno(string DNI);
  void BorrarTodosAlumnos();
};

#endif
