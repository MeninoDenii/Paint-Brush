#ifndef RETANGULO_H
#define RETANGULO_H
#include "Poligono.h"


class Retangulo : public Poligono
{
	public:
		Retangulo(float altura, float base); // Construtor da classe que recebe como parâmetro altura e base.
		float getArea();
		float getPerimetro();
	private:
		float altura; // Variavel referente a altura
		float base;		// Variavel referente a base.
};

#endif
