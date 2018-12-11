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
  list <Profesor> ListaProfesores_;

public:

    Profesor(string DNI,string NombreCompleto, int Edad, string Email, string Credencial, int Rol):
          Persona(DNI, NombreCompleto, Edad, Email){
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial){Credencial_=Credencial;};
inline string GetCredencial(){ return Credencial_;};

inline void setRol(bool Rol){Rol_=Rol;};
inline int getRol(){return Rol_;};

bool AccederSistema(string Credencial, int Rol);
void AltaProfesor();
void BajaProfesor();
void CrearBackup(int Rol);
void CargarBackup(int Rol);
void menuCoordinador();
void menuAyudante();
};

#endif
