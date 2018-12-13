#include"Grupo.h"

using namespace std;

int main(){

int NumGrupo;
Grupo p;

cout<<"Introduzca el grupo que desea Borrar"<<endl;

cin>>NumGrupo;

p.BorrarGrupo(NumGrupo);

p.MostrarGrupo(NumGrupo);
}
