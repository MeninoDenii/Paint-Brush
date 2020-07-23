#ifndef QUADRADO_H
#define QUADRADO_H
#include "Poligono.h"
#include <string>

class Quadrado : public Poligono
{
	public:
		Quadrado(float lado);
	    float getArea();
	    float getPerimetro();
	private:
		float lado;
};

#endif
