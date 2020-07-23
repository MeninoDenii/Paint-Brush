#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono
{
	public:
		virtual float getArea() = 0 ; // Método que pega a área.
		virtual float getPerimetro() = 0; // Método que pega o perimetro.
	private:
		float area; // Variavel referente a área.
		float perimetro; // Variável referente ao perímetro.		
};

#endif
