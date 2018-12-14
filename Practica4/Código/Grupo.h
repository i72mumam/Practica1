#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Grupo{                // Declaramos la clase Grupo
private:                    //Declaramos la parte privada de la clase, junto a sus variables
    string Lider_Grupo_;
    int NumMiembros_;
    int NumGrupo_;

public:                 // Declaramos la parte pública
Grupo(){}               // Creamos un constructor vacío para poder realizar las funciones más adelante

  Grupo(string Lider_Grupo, int NumGrupo, int NumMiembros=0){     // Creamos un constructor con las variables que pertenezcan a la clase Grupo
    Lider_Grupo_=Lider_Grupo;                                     // Igualamos la variables privadas con las variables declaradas en el constructor
    NumMiembros_=NumMiembros;
    NumGrupo_=NumGrupo;
};



void BorrarIntegrante(string DNI);            //Función que borra un integrante de un grupo
void ModificarLider(string DNI, int NumGrupo);    //Función que modifica el líder de un grupo
void BorrarGrupo(int NumGrupo);                   //Función que borra un Grupo
void MostrarGrupo(int NumGrupo);                  //Función que muestra un Grupo
int ContarMiembros(int NumGrupo);
void AnadirIntegrante(string DNI, int NumGrupo, int NumMiembros);   //Función que añade un integrante al nuevo grupo

};

#endif
