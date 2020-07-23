#include <iostream>
#include "Poligono.h"
#include "Circulo.h"
#define PI 3.14

using namespace std;

Circulo::Circulo(float raio)
{
	this -> raio = raio;
}
float Circulo::getRaio()
{
	return this->raio;
}
float Circulo::getArea()
{
	return (PI*(this->raio * this->raio));
}
float Circulo::getPerimetro()
{
	return (2 * PI * raio);
}
