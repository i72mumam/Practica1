#include "Profesor.h"

void Profesor::CrearBackup(int Rol){

    if(Rol==0){
      cout<<"Permiso Denegado"<<endl;
    exit(-1);
    }
ifstream principal;
ofstream secundario;
char * linea;
principal.open("Alumnos.bin", ios::in | ios::binary);
secundario.open("Backup.bin", ios::out | ios:: binary);

  if(principal.is_open()){
    if(secundario.is_open()){
        while(principal.read(linea, 150)){
            secundario.write(linea,150);
        }
    secundario.close();
    }
    else{
      cout<<"No se realizó el backup correctamente"<<endl;
    }
  principal.close();
  }
  else{
    cout<<"El fichero no se abrió correctamente"<<endl;
  }
}

void Profesor:: CargarBackup(int Rol){
    if(Rol==0){
      cout<<"Permiso Denegado"<<endl;
    exit(-1);
    }
ifstream principal;
ofstream secundario;
char * linea;
principal.open("Backup.bin", ios::in | ios::binary);
secundario.open("Alumnos.bin", ios::out | ios:: binary);

  if(principal.is_open()){
    if(secundario.is_open()){
      while(principal.read(linea, 150)){
          secundario.write(linea,150);
        }
    secundario.close();
    }
    else{
      cout<<"No se realizó el backup correctamente"<<endl;
    }
  principal.close();
  }
  else{
    cout<<"El fichero no se abrió correctamente"<<endl;
  }
}

void Profesor:: menuCoordinador(){
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"1. Insertar Alumno"<<endl;
  cout<<"2. Mostrar Alumno"<<endl;
  cout<<"3. Modificar Alumno"<<endl;
  cout<<"4. Borrar Alumno"<<endl;
  cout<<"5. Mostrar todos los alumnos"<<endl;
  cout<<"6. Modificar grupo"<<endl;
  cout<<"7. Dar de Alta un profesor"<<endl;
  cout<<"8. Dar de Baja un profesor"<<endl;
  cout<<"9. Guardar Backup"<<endl;
  cout<<"10. Cargar Backup"<<endl;
  cout<<"11. Borrar todos los alumnos"<<endl;
}

void Profesor:: menuAyudante(){
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"1. Insertar Alumno"<<endl;
  cout<<"2. Mostrar Alumno"<<endl;
  cout<<"3. Modificar Alumno"<<endl;
  cout<<"4. Borrar Alumno"<<endl;
  cout<<"5. Mostrar todos los alumnos"<<endl;
  cout<<"6. Modificar grupo"<<endl;

}


void Profesor:: AccederSistema(string Credencial, int Rol){
Profesores Lista;
string linea;
  ifstream entrada;
  entrada.open("Profesores.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if(Lista.Credencial==Credencial){
            if(Lista.Rol==1){
                menuCoordinador();
            }
            else{
              menuAyudante();
            }
        }
      else{
          cout<<"La credencial introducida no es correcta"<<endl;
        }
      }
    }
}
