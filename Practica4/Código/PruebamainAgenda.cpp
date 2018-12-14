#include"Agenda.h"

using namespace std;

int main(){
bool n;
string DNI, Nombre, Apellido1, Apellido2, Email;
int Edad,Grupo;

Agenda p;

p.MostrarTodosAlumnos();

cout<<"Introduza el DNI"<<endl;
cin>>DNI;

cout<<"Grupo"<<endl;
cin<<Grupo;

p.AnadirIntegrante(DNI, Grupo);

p.MostrarGrupo(Grupo);

}
/*
cout<<"Nombre"<<endl;
cin>>Nombre;
cout<<"Apellido1"<<endl;
cin>>Apellido1;
cout<<"Apellido2"<<endl;
cin>>Apellido2;
cout<<"Edad"<<endl;
cin>>Edad;
cout<<"Grupo"<<endl;
cin>>Grupo;
cout<<"Email"<<endl;
cin>>Email;

p.InsertarAlumno(DNI, Nombre, Apellido1, Apellido2, Edad, Email, Grupo);

p.MostrarTodosAlumnos();



*/


}
