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

typedef struct ListaAlumnos{
    string DNI_;
    string NombreCompleto_;
    int Edad_;
    string Email_;
    int Grupo_;
} ListaAlumnos;

class Agenda : public Persona {

private:
    int Grupo_;
    list <ListaAlumnos> ListaAlumnos_;

  public:

    Agenda(string DNI,string NombreCompleto, int Edad, string Email, int Grupo, bool Lider):
              Persona(DNI, NombreCompleto, Edad, Email){
                Grupo_=Grupo;
              };

  void BuscarAlumno(string DNI);
  void ModificarAlumno(string DNI);
  void BorrarAlumno(string DNI);
  void InsertarAlumno(string DNI);
  void MostrarTodosAlumnos();
  bool ExisteAlumno(string DNI);

};

#endif
