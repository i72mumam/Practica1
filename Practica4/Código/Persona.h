#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

using namespace std;

class Persona{      //Declaramos la clase Persona

private:            //Declaramos la parte privada de la clase y sus variables
    string DNI_;
    string Nombre_;
    string Apellido1_;
    string Apellido2_;
    int Edad_;
    string Email_;

public:             //Declaramos la parte pública de la clase y sus variables
  Persona(){}       //Creamos un constructor vacío para poder realizar las funciones más adelante
    Persona(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email){ //Creamos un constructor con las variables que pertenezcan a la clase Persona
         DNI_=DNI;              //Igualamos las variables privadas con las variables declaradas en el constructor
        Nombre_= Nombre;
        Apellido1_=Apellido1;
        Apellido2_=Apellido2;
        Edad_= Edad;
        Email_= Email;
      }

inline void SetDNI(string DNI){DNI=DNI_;}     //Función que modifica el valor de la variable DNI
inline string GetDNI(){ return DNI_;}         //Función que devuelve el valor de la variable DNI

//inline void SetNombreCompleto(string NombreCompleto){NombreCompleto=NombreCompleto_;}  
//inline string GetNombreCompleto(){return NombreCompleto_;}

inline void SetEdad(int Edad){Edad=Edad_;}  //Función que modifica el valor de la variable Edad
inline int Getedad(){ return Edad_;}        //Función que devuelve el valor de la variable Edad

inline void SetEmail(string Email){Email=Email_;}   //  Función que modifica el valor de la variable Email
inline string GetEmail(){return Email_;}            //Función que devuelve el valor de la variable Email


};

#endif
