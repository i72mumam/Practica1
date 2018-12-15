//Funcionan todos



#include "Grupo.h"
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"

using namespace std;

//Borrar Grupo
void Grupo:: BorrarGrupo(int NumGrupo){

  Alumno aux;   //Auxiliar del constructor
  string linea;   //Declaramos un string para leer el fichero
    ifstream entrada;   //Declaramos un fichero de lectura y otro de salida
    ofstream secundario;
    entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos ambos ficheros
    secundario.open("Temporal.bin",ios::out|ios::binary);

      if(entrada.is_open()){    //Comprobación de si el fichero está abierto

        if(secundario.is_open()){
          while(getline(entrada,linea, ' ')){
            secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
            getline(entrada,linea, ' ');
            secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
            getline(entrada,linea, ' ');
            secundario << linea << ' ';
            getline(entrada,linea, ' ');
            secundario << linea << ' ';
            getline(entrada,linea, ' ');
            secundario << linea << ' ';
            getline(entrada,linea, ' ');
            secundario << linea << ' ';
            getline(entrada,linea, ' ');

              if(atoi(linea.c_str())==NumGrupo){    //Si el numero de grupo introducido corresponde con alguno en el fichero, se borra el grupo
                    aux.SetGrupo(0);
                    int n=aux.GetGrupo();
                    secundario<<n<<' ';
              }
              else{
                  secundario << linea << ' ';
              }
            getline(entrada,linea, '\n');           //Finaliza la linea
            secundario << linea <<endl;



        }
        rename("Temporal.bin", "Alumnos.bin");
        secundario.close();
        entrada.close();
      }

    }

      else{
        cout<<"El fichero no se abrió correctamente"<<endl;
      }
}


// MostrarGrupo
// Muestra los integrantes de un grupo, el cual se pide por pantalla
void Grupo:: MostrarGrupo(int NumGrupo){

    string DNI,Nombre, Apellido1, Apellido2, Email, edad, grupo, linea; // Declaramos los strings necesarios para mostrar al alumno
      ifstream entrada;                // Declaramos el fichero
      entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos el fichero en modo lectura y binario
        if(entrada.is_open()){        // Comprobamos si el fichero se ha abierto
          while(getline(entrada,DNI, ' ')){       //Si el fichero se abre, lee hasta el primer espacio y lo guarda en la variable DNI
            getline(entrada,Nombre, ' ');         // Lee hasta el siguiente espacio y lo guarda en la variable Nombre
            getline(entrada,Apellido1, ' ');      // Lee hasta el siguiente espacio y lo guarda en la variable Apellido1
            getline(entrada,Apellido2, ' ');      // Lee hasta el siguiente espacio y lo guarda en la variable Apellido2
            getline(entrada,edad, ' ');           // Lee hasta el siguiente espacio y lo guarda en la variable edad
            getline(entrada,Email, ' ');          // Lee hasta el siguiente espacio y lo guarda en la variable Email
            getline(entrada,grupo,' ');           // Lee hasta el siguiente espacio y lo guarda en la variable Grupo
            getline(entrada,linea, '\n');         // Lee hasta el siguiente espacio y lo guarda en la variable linea

              if(atoi(grupo.c_str())==NumGrupo){    // Comprobamos si el grupo leido en el fichero es igual al grupo introducido
                  cout<<DNI<<" ";                   // Si es igual, imprime todas las variables que hemos leído antes
                  cout<<Nombre<<" ";
                  cout<<Apellido1<<" ";
                  cout<<Apellido2<<" ";
                  cout<<edad<<" ";
                  cout<<Email<<" ";
                  cout<<grupo<<" ";
                  cout<<linea<<endl;



                }


            }
              entrada.close();
        }
        else{                                     // Si no abre el fichero, se imprime un mensaje de error

              cout<<"El fichero no se abrió correctamente"<<endl;
        }
}

// Borrar integrante de un grupo
void Grupo:: BorrarIntegrante(string DNI){
  Alumno aux;
    string linea;   //Declaramos el string para recorrer el fichero
      fstream entrada;    //Declaramos un fichero de lectura y de salida, ambos en binario
      ofstream secundario;
      entrada.open("Alumnos.bin", ios::in | ios::binary);   //Abrimos ambos ficheros
      secundario.open("Temporal.bin",ios::out|ios::binary);

        if(entrada.is_open()){    //Comprobamos si ambos ficheros están abiertos

          if(secundario.is_open()){
            while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
              if(linea==DNI){   //Si lo introducido corresponde con un DNI que exista en el fichero

                secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
                getline(entrada,linea, ' ');
                secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
                getline(entrada,linea, ' ');
                secundario << linea << ' ';
                getline(entrada,linea, ' ');
                secundario << linea << ' ';
                getline(entrada,linea, ' ');
                secundario << linea << ' ';
                getline(entrada,linea, ' ');
                secundario << linea << ' ';
                getline(entrada,linea, ' ');
                aux.SetGrupo(0);                          //Borrar al alumno del grupo
                int n=aux.GetGrupo();
                secundario<<n<<' ';
                getline(entrada,linea, '\n');
                secundario << linea <<endl;
                  }
              else{
                                                              //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
                        secundario << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
                        getline(entrada,linea, '\n');                       //Finaliza la linea del fichero
                        secundario << linea <<endl;
                }



          }
          rename("Temporal.bin", "Alumnos.bin");      //Se cambian los datos de los ficheros
          secundario.close();     //Se cierran los ficheros
          entrada.close();
        }

      }

        else{   //Si el fichero no se abre
          cout<<"El fichero no se abrió correctamente"<<endl;
        }
  }

//Contar los miembros que hay en un grupo
int Grupo::ContarMiembros(int NumGrupo){          

    string linea; //Declaramos un string para leer el fichero
    int NumMiembros=0;    //El valor inicial es de 0 miembros
      ifstream entrada;   //Declaramos un fichero binario

      entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos el fichero binario


      if(entrada.is_open()){      //Comprobación de si está abierto el fichero
        while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
                if(atoi(linea.c_str())==NumGrupo){    //Si el numero de grupo introducido corresponde con alguno en el fichero, se empieza a sumar 1 a la variable NumMiembros
                    NumMiembros++;
                }
              getline(entrada,linea,'\n');

        }
      entrada.close();    //Cerrar fichero
    }
  return NumMiembros;   //Devuelve el valor de la variable NumMiembros
}

//Añadir Integrante al grupo
void Grupo:: AnadirIntegrante(string DNI, int NumGrupo,int NumMiembros){
    Alumno aux;
      string linea;   //Declaramos un string para leer el fichero
        ifstream entrada;   //Declaramos un fichero de lectura y otro de salida
        ofstream secundario;
        entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos ambos ficheros binarios
        secundario.open("Temporal.bin", ios::out | ios::binary);
        if(entrada.is_open()){    //Comprobación de si ambos ficheros están abiertos

          if(secundario.is_open()){

            if(NumMiembros<3){      //Si el numero de miembros es inferior a 3, se puede añadir el integrante

                  while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
                    if(linea==DNI){   //Si el valor introducido corresponde con el DNI de algun alumno

                      secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
                      getline(entrada,linea, ' ');
                      secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
                      getline(entrada,linea, ' ');
                      secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                      secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                      secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                      secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                      aux.SetGrupo(NumGrupo);                   //Asignamos el alumno el grupo
                      int n=aux.GetGrupo();
                      secundario<<n<<' ';
                      getline(entrada,linea, '\n');
                      secundario << linea <<endl;

                      cout<<endl<<"Se realizó correctamente"<<endl;
                    }

                    else{
                                                                  //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
                        secundario << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';                             //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';
                      getline(entrada,linea, ' ');
                        secundario << linea << ' ';
                      getline(entrada,linea, '\n');                       //Finaliza la linea del fichero
                        secundario << linea <<endl;
                  }
                }
            }

            if(NumMiembros>=3){   //Si el numero de miembros es mayor o igual a 3 no se puede añadir más integrantes
                  cout<<"El grupo está completo"<<endl;

            }
            secundario.close();   //Se cierra ambos ficheros
            entrada.close();
            rename("Temporal.bin","Alumnos.bin");   //Se modifica ambos ficheros
        }
            else{     //Si no se abren ambos ficheros se muestra un mensaje de error
                  cout<<"Error al abrir el fichero"<<endl;
              }

      }
}


//Modificar Lider de un grupo
   void Grupo:: ModificarLider(string DNI,int NumGrupo){
      string linea, p;    //Se declara un fichero de lectura, uno de salida y string para recorrer los ficheros
        ifstream entrada;
        ofstream secundario;
        entrada.open("Alumnos.bin", ios::in|ios::binary);     //Se abren ambos ficheros binarios
          secundario.open("Temporal.bin", ios::out | ios::binary);
        if(entrada.is_open()){      //Comprobación de si los ficheros están abiertos
          if(secundario.is_open()){
          while(getline(entrada,linea,' ')){      //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
              if(linea==DNI){     //Si los datos introducidos se corresponde con algun DNI que haya en el fichero

                  secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                getline(entrada,linea,'\n');
                    p="True";
                    secundario << p <<endl;

              }

              else{

                secundario << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(entrada,linea, ' ');
                secundario << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(entrada,linea, ' ');
                secundario << linea << ' ';
              getline(entrada,linea, ' ');
                secundario << linea << ' ';
              getline(entrada,linea, ' ');
                secundario << linea << ' ';
              getline(entrada,linea, ' ');
                secundario << linea << ' ';
              getline(entrada,linea, ' ');
                if(atoi(linea.c_str())==NumGrupo){        //Si el numero de grupo corresponde con alguno
                  secundario << linea << ' ';
                getline(entrada,linea,'\n');
                    p="False";
                    secundario << p <<endl;
                }
                else{
                  secundario << linea << ' ';
                  getline(entrada,linea, '\n');
                    secundario << linea << endl;

                }
              }
            }
          }
          else{     //Si no existe el alumno o grupo
              cout<<"Error al modificar lider"<<endl;
              exit(-1);
          }
          secundario.close();     //Se cierran ambos ficheros binarios
          entrada.close();
          rename("Temporal.bin","Alumnos.bin");     //Se modifica ambos ficheros
        }
                else{     //Si no se abren ambos ficheros se muestran un mensaje de error
                          cout<<"Error al abrir el fichero"<<endl;

                }
}
