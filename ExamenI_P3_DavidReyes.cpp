#include <iostream>
#include <vector>
#include "Auto.h"
using namespace std;
void menu() {
	int opcion = 6, velmax, caballosf, carroP1, carroP2;
	float aceleracion;
	string marca, modelo;
	vector<Auto>carros;
	vector<Neumaticos>neumaticos;
	vector<CajadeCambios>caja;
	vector<Radiador>radiador;
	vector<Diferencial>diff;
	vector<Ciguenal>cigue;

	while (opcion != 0) {
		cout << "1.Crear Auto\n2.Modificar\n3.Ordenar\n4.Carrera\n5.Salir";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Marca: ";
			cin >> marca;
			cout << "Modelo: ";
			cin >> modelo;
			cout << "Velocidad Maxima: ";
			cin >> velmax;
			cout << "Caballos de Fuerza:";
			cin >> caballosf;
			cout << "Aceleracion: ";
			cin >> aceleracion;
			carros.push_back(Auto(marca, modelo, velmax, caballosf, aceleracion));
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			cout << "Seleccione el carro 1 para correr: ";
			cin >> carroP1;
			cout << "Seleccione el carro 2 para correr: ";
			cin >> carroP2;

			break;
		default:
			cout << "Opcion no valida";
			break;
		}
	}
	carros.clear();
	neumaticos.clear();
	radiador.clear();
	diff.clear();
	cigue.clear();
	caja.clear();
}
int main()
{
	menu();
	return 0;
}