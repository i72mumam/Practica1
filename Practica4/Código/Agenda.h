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


class Agenda : public Persona {   //Declaramos la clase Agenda

private:                          //Declaramos la parte privada de la clase, junto a sus variables
    int Grupo_;


  public:                         //Declaramos la parte pública de la clase

    Agenda(){}                    //Creamos un constructor vacío para poder realizar las funciones más adelante

    Agenda(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo, bool Lider):   // Creamos un constructor con las variables que pertenezcan a la clase Grupo
              Persona(DNI,Nombre, Apellido1, Apellido2 , Edad, Email){
                Grupo_=Grupo;       //Igualamos la variable privada con la variable declarada en el constructor
              };

  void MostrarAlumno(string DNI);   //Función que muestra un alumno
  void ModificarAlumno(string DNI); //Función que modifique un alumno
  void BorrarAlumno(string DNI);    //Función que borre un Alumno
  void InsertarAlumno(string DNI);  //Función que inserte un Alumno
  void MostrarTodosAlumnos();       //Función que muestre todos los alumnos
  bool ExisteAlumno(string DNI);    //Función que demuestre si existe alumno o no
  void BorrarTodosAlumnos();        //Función que borre todos los alumnos
};

#endif
