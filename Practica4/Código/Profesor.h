#ifndef PROFESOR_H
#define PROFESOR_H


#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;



class Profesor : public Persona{

private:
  string Credencial_;
  int Rol_;
  string Usuario_;

public:
    Profesor(){}

    Profesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol):
          Persona(DNI, Nombre, Apellido1, Apellido2, Edad, Email){
                Usuario_=Usuario;
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial){Credencial_=Credencial;};
inline string GetCredencial(){ return Credencial_;};

inline void setRol(bool Rol){Rol_=Rol;};
inline int getRol(){return Rol_;};

int AccederSistema(string Usuario, string Credencial);
void AltaProfesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol);
void BajaProfesor(string DNI);
void CrearBackupAlumnos();
void CrearBackupProfesores();
void CargarBackupAlumnos();
void CargarBackupProfesores();
void menuCoordinador();
void menuAyudante();
void MostrarTodosProfesores();
void BorrarTodosProfesores();
};

#endif
