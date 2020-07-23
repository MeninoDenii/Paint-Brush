#include <iostream>
#include "Poligono.h"
#include "Quadrado.h"

using namespace std;

Quadrado::Quadrado(float lado)
{
	this -> lado = lado;
}
float Quadrado::getArea()
{
	return (this->lado * this->lado);
}
float Quadrado::getPerimetro()
{
	return (this->lado + this->lado + this->lado + this->lado);
}

