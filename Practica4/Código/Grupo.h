#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

Class Grupo{
private:
    string Lider_Grupo_;
    int NumMiembros_
    int NumGrupo_;
    string v_[];

public: Grupo(string Lider_Grupo, int NumMiembros=0, int Numgrupo, string v[]){
    Lider_Grupo_=Lider_Grupo;
    NumMiembros_=NumMiembros;
    NumGrupo_=NumGrupo;
    v_[]=v[];
};

inline string getLider(){return Lider_Grupo_;};
inline void setLider(string Lider_Grupo){Lider_Grupo_=Lider_Grupo }

void borrarIntegrante(string DNI, int NumGrupo);
void modificarGrupo(string v[]);
void borrarGrupo(, int NumMiembros, int NumGrupo);
void mostrarGrupo(int NumGrupo);
bool AnadirIntegrante(string DNI, int NumGrupo);
void modificalider(string DNI, int NumGrupo);

};

#endif
