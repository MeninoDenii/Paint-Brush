#include <iostream>
#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(float altura, float base){
	this -> altura = altura; 
	this -> base = base; 
}

float Retangulo::getArea()
{
	return (this->base * this->altura); 
}

float Retangulo::getPerimetro()
{
	return (this->base*2 + this->altura*2); 
}
