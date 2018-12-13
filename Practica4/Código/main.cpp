#include "Agenda.h"
#include "Profesor.h"
#include "Alumno.h"
#include "Persona.h"
#include "Grupo.h"

using namespace std;

int main(int argc, char ** argv){

char * nombrefichero=argv[1];

int Rol;
int opcion;
string DNI;
int opcion2;
int NumGrupo;


if(argc!=2){
  printf("Olvidó introducir el nombre del fichero. \n");
  exit(-1);
}

cout<<"Introduzca su Credencial"<<endl;
cin >> Credencial;


do{

  AccederSistema(Credencial, Rol)

cin >> opcion;

  switch(opcion){

    case 1:
    cout<<"Introduzca el DNI del alumno que desea insertar"<<endl;
    cin >> DNI;
    InsertarAlumno(DNI);
    break;

    case 2:
      cout<<"Introduzca el DNI del alumno que desea mostrar"<<endl;
      cin >> DNI;
      MostrarAlumno(DNI);
    break;

    case 3:
    cout<<"Introduzca el DNI del alumno que desea modificar sus datos"<<endl;
    cin >> DNI;
    ModificarAlumno(DNI);
    break;

    case 4:
    cout<<"Introduzca el DNI del alumno que desea borrar"<<endl;
    cin >> DNI;
    borraralumno(DNI);
    break;

    case 5:
      MostrarTodosAlumnos();
    break;

    case 6:
    cout<<"Introduzca el Numero de Grupo que desea Modificar"<<endl;
    cin >> NumGrupo;
    cout<<"¿Que desea modificar?"<<endl<<endl;
    cout<<"1. Añadir integrante"<<endl;
    cout<<"2. Borrar integrante"<<endl;
    cout<<"3. Modificar Líder"<<endl;
    cout<<"4. Borrar Grupo"<<endl;
    cin >> opcion2;
        switch{
              case 1:
                cout<<"Introduzca el Numero de grupo"<<endl;
                cin>> NumGrupo;
                cout<<"Introduzca el DNI del alumno que desea añadir al grupo"<<endl;
                cin>>DNI;
                AnadirIntegrante(NumGrupo,DNI);
              break;

              case 2:
                  cout<<"Introduzca el Numero de grupo"<<endl;
                      cin>> NumGrupo;
                  cout<<"Introduzca el DNI del alumno que desea borrar del grupo"<<endl;
                      cin>>DNI;
                borrarIntegrante(NumGrupoDNI);
              break;

              case 3:
                cout<<"Introduzca el Numero de grupo"<<endl;
                cin>> NumGrupo;
                cout<<"Introduzca el DNI del nuevo líder"<<endl;
                  cin>>DNI;
                modificalider(NumGrupo, DNI);
              break;

              case 4:
                cout<<"Introduzca el Numero de grupo"<<endl;
                  cin>> NumGrupo;
              borrarGrupo(NumGrupo);

            break;
          }

    break;

    case 7:
    if(Rol!=1){
        cout<<"Permiso Denegado"<<endl;
        break;
    }
    else{
      string NombreCompleto;
      string Email;
      if(Rol==0)
      cout<<"Introduzca el DNI del nuevo profesor"<<endl;
      cin >> DNI;
      cout<<"Introduzca el Nombre del nuevo profesor"<<endl;
      c
      cin>>NombreCompleto;
      cout<<"Introduzca el Email del nuevo profesor"<<endl;
      cin>>Email;
      AltaProfesor(DNI,NombreCompleto,Email);
    }
    break;

    case 8:
    if(Rol!=1){
        cout<<"Permiso Denegado"<<endl;
        break;
    }
    else{
      cout<<"Introduzca el DNI del profesor que desea dar de baja"<<endl;
      cin >> DNI;
      BajaProfesor(DNI);
  }
    break;

    case 9:
      if(Rol!=1){
          cout<<"Permiso Denegado"<<endl;
          break;
      }
      else{
      string confirmacion;
      cout<<"¿Desea realizar una copia de Seguridad?"<<endl;
        cin >> confirmacion;
          if(confirmacion=='S'){
              CrearBackup();
          }
          else{
              cout<<"No se realizó la copia de Seguridad"<<endl;

          }
        }
    break;

    case 10:
    if(Rol!=1){
        cout<<"Permiso Denegado"<<endl;
        break;
    }
    else{
    string confirmacion;
    cout<<"¿Desea cargar una copia de Seguridad?"<<endl;
      cin >> confirmacion;
        if(confirmacion=='S'){
            CargarBackup();
        }
        else{
            cout<<"No se realizó la copia de Seguridad"<<endl;
        }
    }
    break;

}
    case 11:
    string confirmacion;
        cout<<"¿Desea salir del sistema?"<<endl;
          cin >> confirmacion;
        if(confirmacion=='S'){
          opcion=0;
        }
    break;
    case 12:
    string confirmacion;
    cout<<"¿Seguro que desea borrar todos los alumnos?"<<endl;
    cin>>confirmacion;
    if(confirmacion=="S"){
      BorrarTodosAlumnos();
    }
    break;


}
while(opcion!=0);
}
}
