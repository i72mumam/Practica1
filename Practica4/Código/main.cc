#include "Agenda.h"
#include "Profesor.h"
#include "Alumno.h"
#include "Persona.h"

using namespace std;

int main(int argc, char ** argv){

char * nombrefichero=argv[1];

int opcion;
int tam;
ListaAlumnos Alumnos;
int dni;


if(argc!=2){
  printf("Olvidó introducir el nombre del fichero. \n");
  exit(-1);
}



do{

  AccederSistema(Credencial)

  scanf("%d", &opcion);

  switch(opcion){

    case 1:
      escribirfichero(nombrefichero);
    break;

    case 2:
      leerfichero(nombrefichero);
    break;

    case 3:
      printf("Introduzca el dni que desea buscar. \n");
      scanf("%d", &dni);
      if(buscaralumnoDNI(nombrefichero, dni) == 1)
        printf("Se ha encontrado el alumno correctamente. \n");
    break;

    case 4:
      printf("Introduzca el dni que desea buscar. \n");
      scanf("%d", &dni);
      modificaralumno(nombrefichero, dni);
    break;

    case 5:
      printf("Introduzca el dni del alumno que desea borrar. \n");
      scanf("%d", &dni);
      borraralumno(nombrefichero, dni);
    break;

    case 6:
      imprimiralumnocurso(nombrefichero);
    break;

    case 7:
      numeroalumnos(nombrefichero);
    break;

    case 8:
      insertarnuevoalumno(nombrefichero);
    break;






  }



}

while(opcion!=0);
}
