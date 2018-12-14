#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

using namespace std;

class Persona{

private:
    string DNI_;
    string Nombre_;
    string Apellido1_;
    string Apellido2_;
    int Edad_;
    string Email_;

public:
  Persona(){}
    Persona(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email){
         DNI_=DNI;
        Nombre_= Nombre;
        Apellido1_=Apellido1;
        Apellido2_=Apellido2;
        Edad_= Edad;
        Email_= Email;
      }

inline void SetDNI(string DNI){DNI=DNI_;}
inline string GetDNI(){ return DNI_;}

inline void SetNombre(string Nombre){Nombre=Nombre_;}
inline string GetNombre(){return Nombre_;}

inline void SetApellido1(string Apellido1){Apellido1=Apellido1_;}
inline string GetApellido1(){return Apellido1_;}

inline void SetApellido2(string Apellido2){Apellido2=Apellido2_;}
inline string GetApellido2(){return Apellido2_;}

inline void SetEdad(int Edad){Edad=Edad_;}
inline int GetEdad(){ return Edad_;}

inline void SetEmail(string Email){Email=Email_;}
inline string GetEmail(){return Email_;}


};

#endif
