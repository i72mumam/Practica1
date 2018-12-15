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


class Agenda : public Alumno {    //Declaramos la clase Agenda

private:    //Se declara la parte privada de la clase

  public:   //Se declara la parte publica de la clase

    Agenda(){}    //Se crea un constructor vacío para poder realizar las funciones mas adelante

    Agenda(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, string Lider):   //Creamos un constructor con las variables que pertenezcan a la clase Agenda
              Alumno(DNI,Nombre, Apellido1, Apellido2 , Edad, Email, Grupo, Lider){

              };

  void MostrarAlumno(string DNI); //Función que muestra por pantalla un alumno
  void ModificarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo);   //Función que modifica un alumno
  void BorrarAlumno(string DNI);    //Función que borra un alumno
  void InsertarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo);    //Función que inserta un alumno en el fichero
  void MostrarTodosAlumnos();   //Función que muestra todos los alumnos por pantalla
  bool ExisteAlumno(string DNI);    //Función que comprueba si existe un alumno
  void BorrarTodosAlumnos();    //Función que borra todos los alumnos
};

#endif
