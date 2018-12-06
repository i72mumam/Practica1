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
