#include"Grupo.h"

using namespace std;

int main(){

string DNI;
int NumGrupo;
Grupo p;

cout<<'\n'<<"Introduzca el grupo del integrante que desea Borrar"<<endl;

cin>>NumGrupo;

p.MostrarGrupo(NumGrupo);

cout<<'\n'<<"Introduzca el DNI del alumno que desea borrar del grupo"<<endl;

cin>>DNI;

p.BorrarIntegrante(DNI);

p.MostrarGrupo(NumGrupo);

}
