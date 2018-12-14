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

//inline void SetNombreCompleto(string NombreCompleto){NombreCompleto=NombreCompleto_;}
//inline string GetNombreCompleto(){return NombreCompleto_;}

inline void SetEdad(int Edad){Edad=Edad_;}
inline int Getedad(){ return Edad_;}

inline void SetEmail(string Email){Email=Email_;}
inline string GetEmail(){return Email_;}


};

#endif
