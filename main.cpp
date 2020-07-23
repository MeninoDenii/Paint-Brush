#include <iostream>
#include "Poligono.h"
#include "Retangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include "PaintBush.h"

using namespace std;


void menu()
{
	cout <<"1- Montar Quadrado\n2- Montar Retangulo\n3- Montar Circulo\n4- Calcular Perimetro\n5- Calcular Area\n6- Sair" << endl;
}

int main(int argc, char** argv)
{
	int escolha = 0;
	PaintBush t;
	
	while(escolha != 6)
	{
		cout << "Seja bem-vindo a calculadora de Areas e Perimetros! Escollha uma das opcoes:\n" << endl;
		menu();
		cin >> escolha;
		
		switch(escolha)
		{
			case 1:
				float lado;
				cout << "Nos informe o lado do quadrado:" << endl;
				cin >> lado;
				t.adiciona(new Quadrado(lado));
				break;	
			case 2:
				float base;
				float altura;
				cout << "Nos informe a base do retangulo:" << endl;
				cin >> base;
				cout << "Nos informe a altura do retangulo:" << endl;
				cin >> altura;
				t.adiciona(new Retangulo(base,altura));
				break;
			case 3:
				float raio;
				cout << "Nos informe o raio do circulo:" << endl;
				cin >> raio;
				t.adiciona(new Circulo(raio));
				break;
			case 4:
				cout <<"O perimetro da figura eh de: " << t.calculaPerimetroPoligonos()<<" Centimetro(s)" <<"\n" << endl;
				break;
			case 5:
				cout << "A area da figura eh de: " << t.calculaAreaPoligonos() <<" Metro(s) Quadrado(s)" << "\n" << endl;
				break;
			default:
				cout << "Desculpe, voce digitou a opcao incorreta!!!" << endl;
				break;	
		}
	}
	
	return 0;
}
