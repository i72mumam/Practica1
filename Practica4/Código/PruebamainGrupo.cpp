
#include "Agenda.h"
#include"Grupo.h"


using namespace std;

int main(){

  string DNI, Nombre, Apellido1, Apellido2, Email;
  int Edad,NumGrupo, NumMiembros;

Grupo a;

Agenda p;

p.MostrarTodosAlumnos();

  cout<<"Introduza el DNI"<<endl;
  cin>>DNI;

  cout<<"Grupo"<<endl;
  cin>>NumGrupo;

  NumMiembros= a.ContarMiembros(NumGrupo);

  a.AnadirIntegrante(DNI, NumGrupo,NumMiembros);

  a.MostrarGrupo(NumGrupo);

}
