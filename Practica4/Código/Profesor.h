#ifndef PROFESOR_H
#define PROFESOR_H


#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "Persona.h"

using namespace std;

typedef struct Listaprofesores{
  string Credencial_;
  int Rol_;
} ListaProfesores;

class Profesor : public Persona{

private:
  string Credencial_;
  int Rol_;
  list <ListaProfesores> ListaProfesores_;

public:
    Profesor(){}

    Profesor(string DNI,string NombreCompleto, int Edad, string Email, string Credencial, int Rol):
          Persona(DNI, NombreCompleto, Edad, Email){
                Credencial_=Credencial;
                Rol_=Rol;
          };

inline void setCredencial(string Credencial){Credencial_=Credencial;};
inline string GetCredencial(){ return Credencial_;};

inline void setRol(bool Rol){Rol_=Rol;};
inline int getRol(){return Rol_;};

void AccederSistema(string Credencial);
void AltaProfesor(string DNI,string NombreCompleto,string Email);
void BajaProfesor(string DNI);
void CrearBackup();
void CargarBackup();
void menuCoordinador();
void menuAyudante();
};

#endif
