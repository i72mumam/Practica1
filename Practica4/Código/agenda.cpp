//Funcionan todos

#include "Agenda.h"
#include "Persona.h"
#include "Grupo.h"



void Agenda::MostrarAlumno(string DNI){
string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if(linea==DNI){
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
    entrada.close();
    }
    else{
    	cout<<" El fichero no se abrió correctamente"<<endl;
	}
}






void Agenda::ModificarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo){     //Funciona
   string  linea;
   ifstream entrada;
   ofstream secundario;
   entrada.open("Alumnos.bin",ios::in|ios::binary);
   secundario.open("Temporal.bin", ios::out | ios::binary);
   if(entrada.is_open()){
     if(secundario.is_open()){
      while(getline(entrada,linea, ' ')){

              if(linea==DNI){
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

                secundario.close();

      }
          else{
              cout<<"No se modificó correctamente"<<endl;
              exit(-1);
      }
    }

   else{
        cout<<"Error al abrir el fichero"<<endl;
        exit(-1);
   }
}




void Agenda::BorrarAlumno(string DNI){          //Funciona
  string linea;
   ifstream entrada;
    ofstream secundario;
   entrada.open("Alumnos.bin", ios::in| ios::binary);
   secundario.open("Temporal.bin", ios::out|ios::binary);
     if(entrada.is_open()){
      if(secundario.is_open()){
       while(getline(entrada,linea, ' ')){
           if(linea==DNI){
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
       }
      else{ cout<<"No se borro el alumno correctamente"<<endl;}
    }
     else{
cout<<"El fichero no se abrió correctamente"<<endl;
}
}





void Agenda::InsertarAlumno(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, int Grupo){      //Funciona
  string linea;
  fstream entrada;
  ofstream secundario;
  entrada.open("Alumnos.bin", ios::in| ios::out| ios::binary);
    if(entrada.is_open()){
          entrada.seekg(0,entrada.end);


                entrada << DNI << ' ';
                entrada << Nombre << ' ';
                entrada << Apellido1 << ' ';
                entrada << Apellido2 << ' ';
                entrada << Edad << ' ';
                entrada << Email << ' ';
                entrada << Grupo << ' ';
                entrada << "False" << '\n';

        entrada.close();


  }
  else{
      cout<<"El fichero no se abrió correctamente"<<endl;
  }
}





bool Agenda::ExisteAlumno(string DNI){          //Funciona
  string linea;
  ifstream entrada;
  entrada.open("Alumnos.bin", ios::in| ios::binary);
    if(entrada.is_open()){
      while(getline(entrada,linea, ' ')){
        if(linea==DNI){
          entrada.close();
          return true;
        }

        else{
            getline(entrada,linea,'\n');
        }
      }

 	        entrada.close();

          return false;

    }

    else {
    	cout<<" El fichero no se abrió correctamente"<<endl;
      exit(-1);
    }
}






void Agenda::MostrarTodosAlumnos(){     //Funciona
  string linea;
    ifstream entrada;
    entrada.open("Alumnos.bin", ios::in| ios::binary);
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
          getline(entrada,linea, '\n');
            cout<<linea<<endl;
        }
        entrada.close();
      }
      else{
          cout << "El fichero no se abrió correctamente "<<endl;
      }
  }



  void Agenda::BorrarTodosAlumnos(){          //Funciona
    ofstream entrada;
    ifstream secundario;
    entrada.open("Temporal.bin",ios::out| ios::binary);
    secundario.open("Alumnos.bin",ios::in| ios::binary);

    if(entrada.is_open()){
      if(secundario.is_open()){
        rename("Temporal.bin", "Alumnos.bin");

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
