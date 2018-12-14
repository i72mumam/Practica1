#include "Grupo.h"
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"

using namespace std;

void Grupo:: BorrarGrupo(int NumGrupo){     //Funciona

  Alumno aux;
  string linea;
    ifstream entrada;
    ofstream secundario;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
    secundario.open("Temporal.bin",ios::out|ios::binary);

      if(entrada.is_open()){

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

              if(atoi(linea.c_str())==NumGrupo){
                    aux.SetGrupo(0);
                    int n=aux.GetGrupo();
                    secundario<<n<<' ';
              }
              else{
                  secundario << linea << ' ';
              }
            getline(entrada,linea, '\n');           //Finaliza la linea
            secundario << linea <<endl;


            rename("Temporal.bin", "Alumnos.bin");
            secundario.close();
            entrada.close();
        }
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
                entrada.close();
            }
        }
        else{                                     // Si no abre el fichero, se imprime un mensaje de error

              cout<<"El fichero no se abrió correctamente"<<endl;
        }
}

void Grupo:: BorrarIntegrante(string DNI){            //Funciona
  Alumno aux;
    string linea;
      fstream entrada;
      ofstream secundario;
      entrada.open("Alumnos.bin", ios::in | ios::binary);
      secundario.open("Temporal.bin",ios::out|ios::binary);

        if(entrada.is_open()){

          if(secundario.is_open()){
            while(getline(entrada,linea, ' ')){
              if(linea==DNI){

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
                aux.SetGrupo(0);
                int n=aux.GetGrupo();
                secundario<<n<<' ';
                getline(entrada,linea, '\n');
                secundario << linea <<endl;
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


              rename("Temporal.bin", "Alumnos.bin");
              secundario.close();
              entrada.close();
          }
        }

      }

        else{
          cout<<"El fichero no se abrió correctamente"<<endl;
        }
  }


int ContarMiembros(int NumGrupo){

    string linea;
    int NumMiembros=0;
      ifstream entrada;

      entrada.open("Alumnos.bin", ios::in| ios::binary);


      if(entrada.is_open()){
        while(getline(entrada,linea, ' ')){
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
              getline(entrada,linea, ' ');
                if(atoi(linea.c_str())==NumGrupo){
                    NumMiembros++;
                }
              getline(entrada,linea,'\n');

        }
      entrada.close();
    }
  return NumMiembros;
}

void Grupo:: AnadirIntegrante(string DNI, int NumGrupo,int NumMiembros){
    Alumno aux;
    Grupo aux2;
      string linea;
        ifstream entrada;
        ofstream secundario;
        entrada.open("Alumnos.bin", ios::in| ios::binary);
        secundario.open("Temporal.bin", ios::out | ios::binary);


          if(NumMiembros<3){

                  while(getline(entrada,linea, ' ')){
                    if(linea==DNI){

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
                      aux.SetGrupo(NumGrupo);
                      int n=aux.GetGrupo();
                      secundario<<n<<' ';
                      getline(entrada,linea, '\n');
                      secundario << linea <<endl;
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


            if(NumMiembros>=3){
                  cout<<"El grupo está completo"<<endl;
                  exit(-1);

            secundario.close();
            entrada.close();
          }
}
            else{
                  cout<<"Error al abrir el fichero"<<endl;
              }

}


/*

   void Grupo:: ModificarLider(string DNI,int NumGrupo){
     Alumno aux;
      string Lider_Grupo;
      string linea;
        ifstream entrada;
        entrada.open("Alumnos.bin", ios::in|ios::binary);
        if(entrada.is_open()){
          while(getline(entrada,linea,' ')){
                if((linea.c_str())==DNI){
                  if(atoi(linea.c_str())==NumGrupo){
                    aux.setLider(DNI);


            }
          }
        }
      }
                else{
                          cout<<"Error al abrir el fichero"<<endl;

                }
                }

                */
