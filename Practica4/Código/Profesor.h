#ifndef PROFESOR_H
#define PROFESOR_H


#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "persona.h"

using namespace std;

class Profesor:   Public Persona{

private:
  string Credendial_;
  bool Rol_;

public:

    Profesor(string DNI,string NombreCompleto, int Edad, string Email, string Credencial, bool Rol):
          Persona(DNI, NombreCompleto, Edad, Email){
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial_){Credencial_=Credencial;};
inline string GetCredencial(){ return Credencial_;};

inline void setRol(bool Rol){Rol_=Rol;};
inline bool getRol(){return Rol_;};

bool AccederSistema(string Credencial);
void AltaProfesor();
void BajaProfesor();
void CrearBackup(int Rol);
void CargarBackup(int Rol);
void menuCoordinador();
void menuAyudante();
};

#endif
