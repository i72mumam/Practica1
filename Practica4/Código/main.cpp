#include "Agenda.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Persona.h"
#include "Grupo.h"

using namespace std;

int main(){

int Rolp,Rol;
int opcion;
string Usuario, Credencial, DNI, Nombre, Apellido1, Apellido2, Email;
int Edad,opcion2, NumGrupo, confirmacion, NumMiembros;
Profesor p;
Alumno a;
Grupo g;
Agenda ag;


cout<<"Introduzca su Usuario --->";
cin >> Usuario;
cout<<endl<<"Introduzca su Credencial --->";
cin >> Credencial;


do{

  Rolp=p.AccederSistema(Usuario, Credencial);

cin >> opcion;

  switch(opcion){

    case 1:

    cout<<endl<<"Introduzca el DNI del alumno que desea insertar --->";
    cin >> DNI;

    if(ag.ExisteAlumno(DNI)==1){
      cout<<endl<<"El alumno ya se encuentra registrado en el sistema"<<endl;
    }
    else{

      cout<<endl<<"Nombre del alumno:  ";
      cin>>Nombre;
      cout<<endl<<"Primer apellido del alumno:  ";
      cin>>Apellido1;
      cout<<endl<<"Segundo apellido del alumno:  ";
      cin>>Apellido2;
      cout<<endl<<"Edad del alumno:  ";
      cin>>Edad;
      cout<<endl<<"Email del alumno:  ";
      cin>>Email;
      cout<<endl<<"Nº de grupo del alumno:  ";
      cin>>NumGrupo;

        ag.InsertarAlumno(DNI, Nombre, Apellido1, Apellido2, Edad, Email, NumGrupo);

        cout<<endl<<"Se realizó correctamente"<<endl;
    }

    break;

    case 2:

      cout<<endl<<"Introduzca el DNI del alumno que desea mostrar"<<endl;
      cin >> DNI;
      ag.MostrarAlumno(DNI);
    break;

    case 3:

    cout<<endl<<"Introduzca el DNI del alumno que desea modificar sus datos --->";
    cin >> DNI;

    if(ag.ExisteAlumno(DNI)==1){

    cout<<endl<<endl<<"Nuevo nombre del alumno:  ";
    cin>>Nombre;
    cout<<endl<<endl<<"Nuevo Primer apellido del alumno:  ";
    cin>>Apellido1;
    cout<<endl<<endl<<"Nuevo Segundo apellido del alumno:  ";
    cin>>Apellido2;
    cout<<endl<<endl<<"Nueva Edad del alumno:  ";
    cin>>Edad;
    cout<<endl<<endl<<"Nuevo Email del alumno:  ";
    cin>>Email;
    cout<<endl<<endl<<"Nuevo nº de grupo del alumno:  ";
    cin>>NumGrupo;
    ag.ModificarAlumno(DNI, Nombre, Apellido1, Apellido2, Edad, Email, NumGrupo);

    cout<<endl<<"Se realizó correctamente"<<endl;

    }

    else{
        cout<<endl<<"El alumno no se encuentra en el sistema"<<endl;
    }
    break;

    case 4:

    cout<<endl<<endl<<"Introduzca el DNI del alumno que desea borrar --->";
    cin >> DNI;
    ag.BorrarAlumno(DNI);

    cout<<endl<<"Se realizó correctamente"<<endl;
    break;

    case 5:
      cout<<endl;
      ag.MostrarTodosAlumnos();
    break;

    case 6:

        cout<<endl<<endl<<"Introduzca el Numero de Grupo que desea Modificar --->";
        cin >> NumGrupo;

      do{
        cout<<endl<<endl<<"¿Que desea modificar?"<<endl<<endl;
        cout<<"1. Añadir integrante"<<endl;
        cout<<"2. Borrar integrante"<<endl;
        cout<<"3. Modificar Líder"<<endl;
        cout<<"4. Borrar Grupo"<<endl;
        cout<<"5. Mostrar Grupo"<<endl<<endl;
        cin >> opcion2;

              switch(opcion2){

              case 1:
                g.MostrarGrupo(0);

                NumMiembros=g.ContarMiembros(NumGrupo);
                cout<<endl<<"Introduzca el DNI del alumno que desea añadir al grupo --->";
                cin>>DNI;

                g.AnadirIntegrante(DNI,NumGrupo,NumMiembros);

                cout<<endl<<"Se realizó correctamente"<<endl;
              break;

              case 2:

                cout<<endl<<"Introduzca el DNI del alumno que desea borrar del grupo --->";
                cin>>DNI;
                g.BorrarIntegrante(DNI);

                cout<<endl<<"Se realizó correctamente"<<endl;
              break;

              case 3:

                cout<<endl<<"Introduzca el DNI del nuevo líder --->";
                cin>>DNI;
                g.ModificarLider( DNI,NumGrupo);

                cout<<endl<<"Se realizó correctamente"<<endl;
              break;

              case 4:
              cout<<endl<<"¿Está seguro que desea borrar este grupo? (Si->1//No->0) ";
              cin>>confirmacion;
                if(confirmacion==1){
                    g.BorrarGrupo(NumGrupo);

                    cout<<endl<<"Se realizó correctamente"<<endl;
                }
                else{
                    cout<<endl<<endl<<"No se borró el grupo seleccionado"<<endl;
                }
              break;

            case 5:

              g.MostrarGrupo(NumGrupo);

            break;
          }
        }
          while(opcion2!=0);
    break;

    case 7:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{


      cout<<endl<<"Nombre del profesor:  ";
      cin>>Nombre;
      cout<<endl<<"Primer apellido del profesor:  ";
      cin>>Apellido1;
      cout<<endl<<"Segundo apellido del profesor:  ";
      cin>>Apellido2;
      cout<<endl<<"Edad del profesor:  ";
      cin>>Edad;
      cout<<endl<<"Email del Profesor:  ";
      cin>>Email;
      cout<<endl<<"Usuario del profesor:  ";
      cin>>Usuario;
      cout<<endl<<"Credencial del profesor:  ";
      cin>>Credencial;
      cout<<endl<<"Rol del Profesor: (C->1/A->0)  ";
      cin>>Rol;

        p.AltaProfesor(DNI, Nombre, Apellido1, Apellido2, Edad, Email,Usuario, Credencial, Rol);


        cout<<endl<<"Se realizó correctamente"<<endl;
    }
    break;

    case 8:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{

      cout<<endl<<"Introduzca el DNI del profesor que desea dar de baja --->";
      cin >> DNI;
      p.BajaProfesor(DNI);

      cout<<endl<<"Se realizó correctamente"<<endl;
  }
    break;

    case 9:

      if(Rolp!=1){
          cout<<endl<<"Permiso Denegado"<<endl;
          break;
      }
      else{

      cout<<endl<<"¿Desea realizar una copia de Seguridad? (Si->1//No->0) ";
        cin >> confirmacion;
          if(confirmacion==1){
              p.CrearBackupAlumnos();
              p.CrearBackupProfesores();

              cout<<endl<<"Se creó la copia de seguridad correctamente"<<endl;
          }
          else{
              cout<<endl<<"No se realizó la copia de Seguridad"<<endl;

          }
        }
    break;

    case 10:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{

      cout<<endl<<"¿Desea cargar una copia de Seguridad? (Si->1//No->0) ";
      cin >> confirmacion;
        if(confirmacion==1){
            p.CargarBackupAlumnos();
            p.CargarBackupProfesores();

            cout<<endl<<"Se cargó la copia de seguridad correctamente"<<endl;
        }
        else{
            cout<<endl<<"No se realizó la copia de Seguridad"<<endl;
        }
    }
    break;

    case 11:
    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
      }
      else{
    cout<<endl<<"¿Seguro que desea borrar todos los alumnos? (Si->1//No->0) ";
    cin>>confirmacion;
    if(confirmacion==1){
      ag.BorrarTodosAlumnos();
        cout<<endl<<"Se borraron los alumnos correctamente"<<endl;
    }
    else{
        cout<<endl<<"No se realizó el borrado de los alumnos"<<endl;
    }
      }
    break;

    case 12:
    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
      }
      else{

      cout<<endl;
      p.MostrarTodosProfesores();
    }
    break;
    
    case 0:

        cout<<endl<<"¿Desea salir del sistema? (Si->1//No->0) ";
          cin >> confirmacion;
        if(confirmacion==1){
          cout<<endl<<endl<<"Saliendo del sistema..."<<endl;
        }
        else{
          opcion=NULL;
        }
          break;
}
}
while(opcion!=0);
}
