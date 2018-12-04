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
    Numgrupo_=Numgrupo;
    v_[]=v[];
};

inline string getLider(){return Lider_Grupo_;};
inline void setLider(string Lider_Grupo){Lider_Grupo_=Lider_Grupo }

void setMiembro();
inline void getMiembros(string v[]){
  int i;
  for(i=0;i<=NumMiembros;i++){
      cout << v[i] << '\n';
  }
}

void borrarIntegrante(string DNI, int Numgrupo);
void modificarGrupo(string v[]);
void borrarGrupo(int Numgrupo);


};

#endif
