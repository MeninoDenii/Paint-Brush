#include <iostream>
#include "PaintBush.h"
#include "Poligono.h"
#include <vector>

using namespace std;

void PaintBush::adiciona(Poligono *j)
{
	this->poligonos.push_back(j);
}

float PaintBush::calculaAreaPoligonos()
{
	float adicao = 0;
	
	for(int i = 0; i < this->poligonos.size(); ++i)
	{
		Poligono *j = this->poligonos[i];
		adicao+= j->getArea();
	}
	
	return adicao;
}

float PaintBush::calculaPerimetroPoligonos()
{
	float adicao = 0;
	
	for(int i = 0; i < this->poligonos.size(); ++i)
	{
		Poligono *j = this->poligonos[i];
		adicao+= j->getPerimetro();
	}
	
	return adicao;
}
