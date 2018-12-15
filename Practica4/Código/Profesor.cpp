//Funcionan todos




#include "Profesor.h"
#include "Agenda.h"

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
      cout<<"Se realizó correctamente el backup"<<endl;

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
            cout<<"Se realizó correctamente el backup"<<endl;

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
  secundario.open("Profesores.bin", ios::out | ios:: binary);

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
  cout<<"12. Mostrar todos los profesores"<<endl;
  cout<<"0. Salir del sistema"<<endl;
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
int Profesor:: AccederSistema(string Usuario, string Credencial){

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

                            return 1;
                        }

                        else{                           // Si linea no es igual a 1, cargamos la función menuAyudante()

                            menuAyudante();

                            return 0;
                        }
                  }
              }
      else{                                           // Si el usuario introducido o la credencial no son iguales a las del fichero, no accede al menú

          getline(entrada,linea, '\n');

        }
      }
    }
}



void Profesor:: MostrarTodosProfesores(){
  string linea;
    ifstream entrada;
    entrada.open("Profesores.bin", ios::in| ios::binary);
      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, '\n');
              if(atoi(linea.c_str())==1){
                cout<<"Coordinador"<<endl;
              }
              else{
                  cout<<"Ayudante"<<endl;
              }


        }
        entrada.close();
      }
      else{
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }




void Profesor:: BajaProfesor(string DNI){       //Funciona
  string linea;
  ifstream entrada;
  ofstream secundario;
    entrada.open("Profesores.bin", ios::in| ios::binary);
    secundario.open("Temporal.bin", ios::out | ios::binary);
    if(entrada.is_open()){
      if(secundario.is_open()){
        while(getline(entrada,linea, ' ')){
          if(linea==DNI){
              getline(entrada,linea,'\n');
          }
          else{
              secundario<< linea <<' ';
            getline(entrada,linea,' ');
              secundario << linea << ' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea << ' ';
            getline(entrada,linea,'\n');
              secundario <<linea << endl;
          }
        }
      }
          else{
              cout<<"No se pudo dar de baja al profesor"<<endl;
          }

      entrada.close();
      secundario.close();
      rename("Temporal.bin","Profesores.bin");
    }
      else{
            cout<<"Error al abrir el fichero"<<endl;
    }
}





void Profesor:: AltaProfesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol){      // Funciona
    string linea;
    fstream entrada;
    entrada.open("Profesores.bin", ios::in |ios::out | ios::binary);
    if(entrada.is_open()){
      entrada.seekg(0,entrada.end);

            entrada << DNI << ' ';
            entrada << Nombre << ' ';
            entrada << Apellido1 << ' ';
            entrada << Apellido2 << ' ';
            entrada << Edad << ' ';
            entrada << Email << ' ';
            entrada << Usuario << ' ';
            entrada << Credencial << ' ';
            entrada << Rol << ' ';

      }
      else{
          cout<<"Error al abrir el fichero"<<endl;
      }
}




void Profesor::BorrarTodosProfesores(){          //Funciona
  ofstream entrada;
  ifstream secundario;
  entrada.open("Temporal.bin",ios::out| ios::binary);
  secundario.open("Profesores.bin",ios::in| ios::binary);

  if(entrada.is_open()){
    if(secundario.is_open()){
          rename("Temporal.bin","Profesores.bin");
        secundario.close();
    }
    else{
        cout<<"No se borraron los alumnos"<<endl;
    }
    entrada.close();

  }
    else{
      cout<<"El fichero no se abrió correctamente"<<endl;
  }
}
