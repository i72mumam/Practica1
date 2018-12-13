#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

class Grupo{
private:
    string Lider_Grupo_;
    int NumMiembros_;
    int NumGrupo_;

public:
Grupo(){}

  Grupo(string Lider_Grupo, int NumGrupo, int NumMiembros=0){
    Lider_Grupo_=Lider_Grupo;
    NumMiembros_=NumMiembros;
    NumGrupo_=NumGrupo;
};

inline string getLider(){return Lider_Grupo_;}
inline void setLider(string Lider_Grupo){Lider_Grupo_=Lider_Grupo; }

void BorrarIntegrante(string DNI, int NumGrupo);
void ModificarLider(string DNI, int NumGrupo);
void BorrarGrupo(int NumGrupo);
void MostrarGrupo(int NumGrupo);
bool AnadirIntegrante(string DNI, int NumGrupo);

};

#endif
