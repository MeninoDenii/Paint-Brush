#ifndef CIRCULO_H
#define CIRCULO_H
#include "Poligono.h"

class Circulo : public Poligono
{
	public:
		Circulo(float raio);
		float getRaio();
		float getArea();
		float getPerimetro();
	private:
		float raio;
};



#endif
