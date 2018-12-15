//Funcionan todos

#include "Agenda.h"
#include "Persona.h"
#include "Grupo.h"


//Mostrar Alumno
//Muestra por pantalla el alumno
void Agenda::MostrarAlumno(string DNI){
string linea;     //Declaramos un string para leer el fichero
  ifstream entrada; //Declaramos el fichero
  entrada.open("Alumnos.bin", ios::in| ios::binary);    //  Abrimos el fichero binario
    if(entrada.is_open()){    //Comprobamos si el fichero está abierto
      while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
        if(linea==DNI){   //Si el valor introducido es igual al DNI, mostrar por pantalla el alumno
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
          cout<<linea<<endl;
        }
        getline(entrada,linea,'\n');
      }
    entrada.close();    //Cerramos el fichero
    }
    else{   //Si no se abre el fichero
    	cout<<" El fichero no se abrió correctamente"<<endl;
	}
}





//Modificar alumno
void Agenda::ModificarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo){
   string  linea;   //Declaramos el string para leer el fichero
   ifstream entrada;    //Declaramos un fichero de lectura
   ofstream secundario;   //Declaramos un fichero de salida
   entrada.open("Alumnos.bin",ios::in|ios::binary);   //Abrimos el fichero binario
   secundario.open("Temporal.bin", ios::out | ios::binary);   //Abrimos el fichero binario
   if(entrada.is_open()){   //Comprobación de fichero
     if(secundario.is_open()){    //Comprobación de fichero
      while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea

              if(linea==DNI){   //Si el DNI introducido corresponde con alguno del fichero, se pide por pantalla para modificar el alumno
                  secundario << DNI <<' ';
                  secundario << Nombre <<' ';
                  secundario << Apellido1<<' ';
                  secundario << Apellido2 <<' ';
                  secundario << Edad <<' ';
                  secundario << Email <<' ';
                  secundario << Grupo <<' ';
                  secundario << "False" <<'\n';
              getline(entrada,linea,'\n');
              }

              else{

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
                  secundario << linea <<' ';
                  getline(entrada,linea, ' ');
                  secundario << linea << ' ';
                  getline(entrada,linea,'\n');
                  secundario <<linea << endl;


              }
          }
              rename("Temporal.bin", "Alumnos.bin");

                secundario.close();   //Cerramos el fichero

      }
          else{   //Si hay algún error al modificar el alumno
              cout<<"No se modificó correctamente"<<endl;
              exit(-1);
      }
    }

   else{    //Si no se abren los ficheros
        cout<<"Error al abrir el fichero"<<endl;
        exit(-1);
   }
}



//Borrar Alumno
void Agenda::BorrarAlumno(string DNI){
  string linea;   //Declaramos un string para leer el fichero
   ifstream entrada;    //Declaramos un fichero de lectura
    ofstream secundario;    //Declaramos un fichero de salida
   entrada.open("Alumnos.bin", ios::in| ios::binary);   //Abrimos ambos ficheros
   secundario.open("Temporal.bin", ios::out|ios::binary);
     if(entrada.is_open()){   //Comprobamos si ambos ficheros se han abierto
      if(secundario.is_open()){
       while(getline(entrada,linea, ' ')){    //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
           if(linea==DNI){                //Si lo introducido por teclado es igual a un DNI del fichero se borra el alumno
               getline(entrada,linea,'\n');
          }

          else{
              secundario<< linea <<' ';
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

          rename("Temporal.bin","Alumnos.bin");

           }
       }    //Si el DNI introducido no corresponde con ninguno del fichero
      else{ cout<<"No se borro el alumno correctamente"<<endl;}
    }
     else{      //Si el fichero no está abierto
cout<<"El fichero no se abrió correctamente"<<endl;
}
}




//Insertar Alumno
void Agenda::InsertarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo){
  string linea;   //Declaramos un string para leer el fichero
  fstream entrada;    //Declaramos un fichero binario de lectura
  ofstream secundario;    //Declaramos un fichero binario de salida
  entrada.open("Alumnos.bin", ios::in| ios::out| ios::binary);    //Abrimos el fichero binario
    if(entrada.is_open()){    //Comprobamos que el fichero está abierto
          entrada.seekg(0,entrada.end);   //Se añade el alumno

                // Se insertan los datos del alumno
                entrada << DNI << ' ';
                entrada << Nombre << ' ';
                entrada << Apellido1 << ' ';
                entrada << Apellido2 << ' ';
                entrada << Edad << ' ';
                entrada << Email << ' ';
                entrada << Grupo << ' ';
                entrada << "False" << '\n';

        entrada.close();    //Cerramos el fichero


  }
  else{   //Si no se abre el fichero
      cout<<"El fichero no se abrió correctamente"<<endl;
  }
}




//Comprobar si existe un alumno
bool Agenda::ExisteAlumno(string DNI){
  string linea;   //Declaramos un string para leer el fichero
  ifstream entrada;   //Declaramos un fichero
  entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos el fichero
    if(entrada.is_open()){    //Comprobación del fichero
      while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
        if(linea==DNI){   //Si lo introducido se corresponde con un DNI del fichero, se cierra el fichero
          entrada.close();
          return true;
        }

        else{   //Si no corresponde con ningún DNI
            getline(entrada,linea,'\n');
        }
      }

 	        entrada.close();    //Se cierra el fichero

          return false;

    }

    else {    //Si no se abre el fichero
    	cout<<" El fichero no se abrió correctamente"<<endl;
      exit(-1);
    }
}





//Mostrar todos los alumnos
void Agenda::MostrarTodosAlumnos(){
  string linea;   //Declaramos un string para leer el fichero
    ifstream entrada;   //Declaramos un fichero
    entrada.open("Alumnos.bin", ios::in| ios::binary);    //Abrimos el fichero binario
      if(entrada.is_open()){    //Comprobación del fichero si está abierto
        while(getline(entrada,linea, ' ')){   //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea
            cout<<linea<<' ';   //Se muestran por pantalla todos los alumnos
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
            cout<<linea<<endl;
        }
        entrada.close();    //Se cierra el fichero
      }
      else{   //Si no se abre el fichero
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }


//Borrar todos los alumnos
  void Agenda::BorrarTodosAlumnos(){
    ofstream entrada;   //Declaramos un fichero de lectura y uno de salida
    ifstream secundario;
    entrada.open("Temporal.bin",ios::out| ios::binary);   //Abrimos ambos ficheros binarios
    secundario.open("Alumnos.bin",ios::in| ios::binary);

    if(entrada.is_open()){    //Comprobación de si están abiertos ambos ficheros
      if(secundario.is_open()){
        rename("Temporal.bin", "Alumnos.bin");    //Se borran los datos

          secundario.close();   //Se cierra el fichero
      }
      else{
          cout<<"No se borraron los alumnos"<<endl;
      }
      entrada.close();    //Se cierra el fichero
    }
      else{   // Si no se abren los ficheros
        cout<<"El fichero no se abrió correctamente"<<endl;
    }
  }
