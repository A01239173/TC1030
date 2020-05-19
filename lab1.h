/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01231973 Marcela Ibarra Mora
 *
 *----------------------------------*/
#ifndef LAB1_H
#define LAB1_H

#include <string>
#include <cmath>
using namespace std;

class triangulos{
  protected:
    float lado_a;
    float lado_b;
    float peri;
    float area;
  public: 
    triangulos(float a,float b);
    float getlado_a() const;
    float getlado_b() const;
    void setlado_a(float i);
    void setlado_b(float j); 
    float perimetro();
    float c_area();
};

triangulos::triangulos(float a,float b){
  lado_a=a;
  lado_b=b;
}

float triangulos::getlado_a() const{
  return lado_a;
}

float triangulos::getlado_b() const{
  return lado_b;
}

void triangulos::setlado_a(float i){
  lado_a=i;
}

void triangulos::setlado_b(float j){
  lado_b=j;
}

float triangulos::perimetro(){
  peri=2*(lado_a)+lado_b;
}

float triangulos::c_area(){
  float h=sqrt(-((lado_b*lado_b)/4)+(lado_a*lado_a));
  area=(lado_b*h)/2;
}

#endif