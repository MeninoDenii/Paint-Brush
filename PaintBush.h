#ifndef PAINTBUSH_H
#define PAINTBUSH_H
#include "PaintBush.h"
#include "Poligono.h"
#include <vector>

using namespace std;

class PaintBush
{
	public:
		float calculaAreaPoligonos();
		float calculaPerimetroPoligonos();
		void adiciona(Poligono *j);
	private:
		vector<Poligono*> poligonos;
};

#endif
