// Estructuras en C++ Norma 01
  #include "bits/stdc++.h"

  using namespace std;

  struct Humano{    //Se define la estructura o "molde a utilizar" y se le pone un nombre

    string nombre;
    string apodo;
    int edad;

  };

  main(){
  system("color b");

  Humano persona1, persona2;      // Todas las variables bajo el nombre de la estructura o molde se apegaran a "Humano"

  persona1.nombre = "Max Power";
  persona1.apodo = "Max Poweer";
  persona1.edad = 30;

  persona2.nombre = "Roquemon";
  persona2.apodo  = "Poki";
  persona2.edad   = 35;

cout << " Persona 1 ";

  cout << "\n El nombre es " << persona1.nombre;
  cout << "\n El apodo es " << persona1.apodo;
  cout << "\n Tiene " << persona1.edad << " anos";

cout << "\n\n Persona 2 ";


  cout << "\n El nombre es " << persona2.nombre;
  cout << "\n El apodo es " << persona2.apodo;
  cout << "\n Tiene " << persona2.edad << " anos";


  }

