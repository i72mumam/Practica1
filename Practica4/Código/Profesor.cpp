#include "Profesor.h"

//CrearBackup
//Crea una copia de seguridad de Alumnos.bin
void Profesor::CrearBackupAlumnos(){

ifstream principal;         //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream secundario;
string linea;
principal.open("Alumnos.bin", ios::in | ios::binary);                 //Abrimos los ficheros, ambos en binario
secundario.open("BackupAlumnos.bin", ios::out | ios:: binary);

  if(principal.is_open()){                                // Comprobamos si los ficheros se han abierto
      if(secundario.is_open()){
          while(getline(principal,linea,' ')){          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(principal,linea, ' ');
              secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, '\n');           //Finaliza la linea
              secundario << linea <<endl;

        }
    secundario.close();                               // Cerramos el fichero de escritura
    }
    else{                                             // Si no se abre el fichero de escritura, aparece un mensaje de error

      cout<<"No se realizó el backup correctamente"<<endl;
    }
  principal.close();                                  // Cerramos el fichero de lectura
  }
  else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

    cout<<"El fichero no se abrió correctamente"<<endl;
  }
}





//CrearBackup
//Crea una copia de seguridad de Profesores.bin
void Profesor::CrearBackupProfesores(){

ifstream principal;         //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream secundario;
string linea;
principal.open("Profesores.bin", ios::in | ios::binary);                 //Abrimos los ficheros, ambos en binario
secundario.open("BackupProfesores.bin", ios::out | ios:: binary);

  if(principal.is_open()){                                // Comprobamos si los ficheros se han abierto
      if(secundario.is_open()){
          while(getline(principal,linea,' ')){          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(principal,linea, ' ');
              secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, '\n');           //Finaliza la linea del fichero
              secundario << linea <<endl;

        }
    secundario.close();                               // Cerramos el fichero de escritura
    }
    else{                                             // Si no se abre el fichero de escritura, aparece un mensaje de error

      cout<<"No se realizó el backup correctamente"<<endl;
    }
  principal.close();                                  // Cerramos el fichero de lectura
  }
  else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

    cout<<"El fichero no se abrió correctamente"<<endl;
  }
}



//CargarBackupAlumnos
//Carga una copia de seguridad de BackupAlumnos.bin

void Profesor:: CargarBackupAlumnos(){
ifstream principal;                                    //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream secundario;
string linea;
principal.open("BackupAlumnos.bin", ios::in | ios::binary);              //Abrimos los ficheros, ambos en binario
secundario.open("Alumnos.bin", ios::out | ios:: binary);

  if(principal.is_open()){                                         // Comprobamos si los ficheros se han abierto
    if(secundario.is_open()){
      while(getline(principal,linea,' ')){                          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
            secundario << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
            getline(principal,linea, ' ');
            secundario << linea << ' ';                             //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
            getline(principal,linea, ' ');
            secundario << linea << ' ';
            getline(principal,linea, ' ');
            secundario << linea << ' ';
            getline(principal,linea, ' ');
            secundario << linea << ' ';
            getline(principal,linea, ' ');
            secundario << linea << ' ';
            getline(principal,linea, ' ');
            secundario << linea << ' ';
            getline(principal,linea, '\n');                       //Finaliza la linea del fichero
            secundario << linea <<endl;

        }
    secundario.close();                                         // Cerramos el fichero de escritura
    }
    else{                                               // Si no se abre el fichero de escritura, aparece un mensaje de error

      cout<<"No se cargó el backup correctamente"<<endl;
    }
    principal.close();                                  // Cerramos el fichero de lectura
    }

    else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

      cout<<"El fichero no se abrió correctamente"<<endl;
    }
  }



  //CargarBackupProfesores
  //Carga una copia de seguridad de BackupAlumnos.bin

  void Profesor:: CargarBackupProfesores(){
  ifstream principal;                                    //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
  ofstream secundario;
  string linea;
  principal.open("BackupProfesores.bin", ios::in | ios::binary);              //Abrimos los ficheros, ambos en binario
  secundario.open("Alumnos.bin", ios::out | ios:: binary);

    if(principal.is_open()){                                         // Comprobamos si los ficheros se han abierto
      if(secundario.is_open()){
        while(getline(principal,linea,' ')){                          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              secundario << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(principal,linea, ' ');
              secundario << linea << ' ';                             //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, '\n');                       //Finaliza la linea del fichero
              secundario << linea <<endl;

          }
      secundario.close();                                         // Cerramos el fichero de escritura
      }
      else{                                               // Si no se abre el fichero de escritura, aparece un mensaje de error

        cout<<"No se cargó el backup correctamente"<<endl;
      }
      principal.close();                                  // Cerramos el fichero de lectura
      }

      else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

        cout<<"El fichero no se abrió correctamente"<<endl;
      }
    }



// menuCoordinador
// Imprime por pantalla las opciones que puede elegir en el programa en caso de ser Coordinador
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


// menuAyudante
// Imprime por pantalla las opciones que puede elegir en el programa en caso de ser Ayudante
void Profesor:: menuAyudante(){               //Funciona
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"1. Insertar Alumno"<<endl;
  cout<<"2. Mostrar Alumno"<<endl;
  cout<<"3. Modificar Alumno"<<endl;
  cout<<"4. Borrar Alumno"<<endl;
  cout<<"5. Mostrar todos los alumnos"<<endl;
  cout<<"6. Modificar grupo"<<endl;

}



//AccederSistema
// Permite al usuario acceder al sistema mediante su usuario y credencial, ambas introducidas por teclado
void Profesor:: AccederSistema(string Usuario, string Credencial){

string linea;                               //Declaramos un fichero de lectura y un string para recorrerlo
  ifstream entrada;
  entrada.open("Profesores.bin", ios::in| ios::binary);       //Abrimos el fichero en binario
    if(entrada.is_open()){                                    // Comprobamos si se ha abierto el fichero
      while(getline(entrada,linea, ' ')){                     // Si el fichero se abre,  leemos hasta el primer espacio y lo guardamos en la variable linea
            getline(entrada,linea, ' ');                      // Realizaremos esto hasta que lea el usuario en la linea del fichero
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');

              if(linea==Usuario){                         // Si línea es igual al usuario introducido, vuelve a leer hasta el siguiente espacio

                getline(entrada,linea, ' ');

                  if(linea==Credencial){                  // Si linea es igual a la credencial introducida, vuelve a leer hasta el siguiente espacio

                      getline(entrada,linea, '\n');

                        if(atoi(linea.c_str())==1){       // Transformamos línea, que es de tipo string, a un entero, y si línea es igual 1, cargamos la funcion menuCoordinador()

                            menuCoordinador();
                        }

                        else{                           // Si linea no es igual a 1, cargamos la función menuAyudante()

                            menuAyudante();
                        }
                  }
              }
      else{                                           // Si el usuario introducido o la credencial no son iguales a las del fichero, no accede al menú

          getline(entrada,linea, '\n');

        }
      }
    }
}
