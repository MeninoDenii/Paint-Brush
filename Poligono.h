#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono
{
	public:
		virtual float getArea() = 0 ; // M�todo que pega a �rea.
		virtual float getPerimetro() = 0; // M�todo que pega o perimetro.
	private:
		float area; // Variavel referente a �rea.
		float perimetro; // Vari�vel referente ao per�metro.		
};

#endif
