#include "Profesor.h"

void Profesor:: CrearBackup(){
ListaAlumnos Alumnos, agenda;
    if(Rol==0){
      cout<<"Permiso Denegado"
    exit(-1);
    }
ifstream principal;
ofstream secundario;
principal.open("Alumnos.bin", ios::in | ios::binary)
secundario.open("Backup.bin", ios::out | ios:: binary)

  if(principal.is_open()){
    if(secundiario_is.open()){
        while(principal.read((char *)agenda, sizeof(ListaAlumnos))){
            secundario.write((char *)Alumnos, sizeof(ListaAlumnos));
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

void Profesor:: CrearBackup(){
ListaAlumnos Alumnos, agenda;
    if(Rol==0){
      cout<<"Permiso Denegado"
    exit(-1);
    }
ifstream principal;
ofstream secundario;
principal.open("Backup.bin", ios::in | ios::binary)
secundario.open("Alumnos.bin", ios::out | ios:: binary)

  if(principal.is_open()){
    if(secundiario_is.open()){
        while(principal.read((char *)agenda, sizeof(ListaAlumnos))){
            secundario.write((char *)Alumnos, sizeof(ListaAlumnos));
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

void Agenda:: menuCoordinador(){
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"Insertar Alumno"<<endl;
  cout<<"Mostrar Alumno"<<endl;
  cout<<"Modificar Alumno"<<endl;
  cout<<"Borrar Alumno"<<endl;
  cout<<"Mostrar todos los alumnos"<<endl;
  cout<<"Modificar grupo"<<endl;
  cout<<"Dar de Alta un profesor"<<endl;
  cout<<"Dar de Baja un profesor"<<endl;
  cout<<"Guardar Backup"<<endl;
  cout<<"Cargar Backup"<<endl;
}

void Agenda:: menuAyudante(){
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"Insertar Alumno"<<endl;
  cout<<"Mostrar Alumno"<<endl;
  cout<<"Modificar Alumno"<<endl;
  cout<<"Borrar Alumno"<<endl;
  cout<<"Mostrar todos los alumnos"<<endl;
  cout<<"Modificar grupo"<<endl;
}


void Profesor:: AccederSistema(string Credencial){

  if(Credencial==True){
      menuCoordinador();
  }
  else{
      menuAyudante();
  }
}
