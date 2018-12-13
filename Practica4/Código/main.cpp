#include "Agenda.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Persona.h"
#include "Grupo.h"

using namespace std;

int main(){

string Credencial;
int Rol;
int opcion;
string DNI;
int opcion2;
int NumGrupo;
Profesor p;
Alumno a;
Grupo g;
Agenda ag;
int confirmacion;


cout<<"Introduzca su Credencial"<<endl;
cin >> Credencial;


do{

  p.AccederSistema(Credencial);

cin >> opcion;

  switch(opcion){

    case 1:

    cout<<"Introduzca el DNI del alumno que desea insertar"<<endl;
    cin >> DNI;
    ag.InsertarAlumno(DNI);
    break;

    case 2:

      cout<<"Introduzca el DNI del alumno que desea mostrar"<<endl;
      cin >> DNI;
      ag.MostrarAlumno(DNI);
    break;

    case 3:

    cout<<"Introduzca el DNI del alumno que desea modificar sus datos"<<endl;
    cin >> DNI;
    ag.ModificarAlumno(DNI);
    break;

    case 4:

    cout<<"Introduzca el DNI del alumno que desea borrar"<<endl;
    cin >> DNI;
    ag.BorrarAlumno(DNI);
    break;

    case 5:

      ag.MostrarTodosAlumnos();
    break;

    case 6:

      cout<<"Introduzca el Numero de Grupo que desea Modificar"<<endl;
      cin >> NumGrupo;
      cout<<"¿Que desea modificar?"<<endl<<endl;
      cout<<"1. Añadir integrante"<<endl;
      cout<<"2. Borrar integrante"<<endl;
      cout<<"3. Modificar Líder"<<endl;
      cout<<"4. Borrar Grupo"<<endl;
      cout<<"5. Mostrar Grupo"<<endl;
      cin >> opcion2;
          switch(opcion2){
              case 1:

                cout<<"Introduzca el Numero de grupo"<<endl;
                cin>> NumGrupo;
                cout<<"Introduzca el DNI del alumno que desea añadir al grupo"<<endl;
                cin>>DNI;
                g.AnadirIntegrante(DNI,NumGrupo);
              break;

              case 2:

                  cout<<"Introduzca el Numero de grupo"<<endl;
                      cin>> NumGrupo;
                  cout<<"Introduzca el DNI del alumno que desea borrar del grupo"<<endl;
                      cin>>DNI;
                g.BorrarIntegrante(DNI,NumGrupo);
              break;

              case 3:

                cout<<"Introduzca el Numero de grupo"<<endl;
                cin>> NumGrupo;
                cout<<"Introduzca el DNI del nuevo líder"<<endl;
                  cin>>DNI;
                g.ModificarLider( DNI,NumGrupo);
              break;

              case 4:

                cout<<"Introduzca el Numero de grupo"<<endl;
                  cin>> NumGrupo;
              g.BorrarGrupo(NumGrupo);

            break;

            case 5:
              cout<<"Introduzca el Numero de grupo"<<endl;
              cin>> NumGrupo;
              g.MostrarGrupo(NumGrupo);

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
      cout<<"Introduzca el DNI del nuevo profesor"<<endl;
      cin >> DNI;
      cout<<"Introduzca el Nombre del nuevo profesor"<<endl;
      cin>>NombreCompleto;
      cout<<"Introduzca el Email del nuevo profesor"<<endl;
      cin>>Email;
      p.AltaProfesor(DNI,NombreCompleto,Email);
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
      p.BajaProfesor(DNI);
  }
    break;

    case 9:

      if(Rol!=1){
          cout<<"Permiso Denegado"<<endl;
          break;
      }
      else{

      cout<<"¿Desea realizar una copia de Seguridad? 1->Yes//0->No"<<endl;
        cin >> confirmacion;
          if(confirmacion==1){
              p.CrearBackup();
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

      cout<<"¿Desea realizar una copia de Seguridad? 1->Yes//0->No"<<endl;
      cin >> confirmacion;
        if(confirmacion==1){
            p.CargarBackup();
        }
        else{
            cout<<"No se realizó la copia de Seguridad"<<endl;
        }
    }
    break;

    case 11:

    cout<<"¿Seguro que desea borrar todos los alumnos?"<<endl;
    cin>>confirmacion;
    if(confirmacion==1){
      ag.BorrarTodosAlumnos();
    }
    else{
        cout<<"No se realizó el borrado de los alumnos"<<endl;
    }
    break;

    case 0:

        cout<<"¿Desea salir del sistema? 1->Yes//0->No"<<endl;
          cin >> confirmacion;
        if(confirmacion==1){
          cout<<"Saliendo del sistema..."<<endl;
        }
        else{
          opcion=NULL;
        }
          break;
}
}
while(opcion!=0);
}
