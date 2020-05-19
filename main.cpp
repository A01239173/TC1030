/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01231973 Marcela Ibarra Mora
 *
 *----------------------------------*/
#include <iostream>
using namespace std;
#include "lab1.h"

int main (){
  triangulos e1(30,20);

  cout<< "Trianulo con dos lados de 30 y uno de 20" << "\n";
  cout<< "Lado a= "<< e1.getlado_a()<< "\n";
  cout<< "Lado b= "<< e1.getlado_b()<< "\n";
  cout<< "Perimetro= "<< e1.perimetro()<<"\n";
  cout<< "Área= "<< e1.c_area()<<"\n\n";
  
  cout<< "Ahora cambia los lados del triangulo..."<<"\n";
  float lado_a;
  float lado_b;
  cout<< "Valor de los lados repetidos: ";
  cin>> lado_a;
  cout<< "Valor del lado diferente: ";
  cin>> lado_b;
  e1.setlado_a(lado_a);
  e1.setlado_b(lado_b);

  cout<< "\n" << "Triangulo con dos lados de "<< lado_a <<" y uno de "<< lado_b << "\n";
  cout<< "Lado a= "<< e1.getlado_a()<< "\n";
  cout<< "Lado b= "<< e1.getlado_b()<< "\n";
  cout<< "Perimetro= "<< e1.perimetro()<<"\n";
  cout<< "Área= "<< e1.c_area()<<"\n";


  return 0;
}