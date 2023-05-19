#include <iostream>
#include <vector>
#include "Auto.h"
using namespace std;
void imprimir(std::vector<Auto> v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << ". ";
		cout << "Marca: " << v.at(i).getmarca() << endl;
		cout << "Modelo: " << v.at(i).getmodelo() << endl;
		cout << "Velocidad Maxima: " << v.at(i).getvelmax() << endl;
		cout << "Caballos de Fuerza: " << v.at(i).getcaballosf() << endl;
		cout << "Aceleracion: " << v.at(i).getaceleracion() << endl;
	}
}
void carrera(std::vector<Auto> v,int cc1,int cc2) {
	float ta = 0,ta2=0;//tiempo de aceleracion ambos carros
	float da = 0,da2=0;//distancia de aceleracion ambos carros
	float tvm = 0,tvm2=0;//tiempo de velocidad maxima ambos carros
	float tt = 0, tt2 = 0;//tiempo total de ambos carros
	int distancia;
	cout << "Ingrese la distancia de la carrera: ";
	cin >> distancia;
	ta = v.at(cc1).getvelmax() / v.at(cc1).getaceleracion();
	ta2= v.at(cc2).getvelmax() / v.at(cc2).getaceleracion();
	da= 0.5* v.at(cc1).getaceleracion()*(ta*ta);
	da2 = 0.5 * v.at(cc2).getaceleracion() * (ta2 * ta2);
	tvm = (da - distancia) / v.at(cc1).getvelmax();
	tvm2 = (da2 - distancia) / v.at(cc2).getvelmax();
	tt = ta + tvm;
	tt2 = ta2 + tvm2;
	cout << "Tiempo total auto 1: " << tt;
	cout << "Tiempo total auto 2:" << tt2;
	if (tt<tt2) {
		cout << "El auto 1 es el ganador";
	}
	else {
		cout << "El auto 2 es el ganador";
	}
}
void menu() {
	int opcion = 6,opcionor, velmax, caballosf, carroP1, carroP2;
	float aceleracion;
	string marca, modelo;
	vector<Auto>carros,ordenar;
	vector<Neumaticos>neumaticos;
	//crear radiadores
	neumaticos.push_back(Neumaticos(0.5));
	neumaticos.push_back(Neumaticos(1.5));
	neumaticos.push_back(Neumaticos(2.5));
	vector<CajadeCambios>caja;
	//crear cajas de cambio
	caja.push_back(CajadeCambios(0.5,40));
	caja.push_back(CajadeCambios(1.5, 60));
	caja.push_back(CajadeCambios(2.5, 80));
	vector<Radiador>radiador;
	//crear radiadores
	radiador.push_back(Radiador(150));
	radiador.push_back(Radiador(250));
	radiador.push_back(Radiador(350));
	vector<Diferencial>diff;
	//crear diferenciales
	diff.push_back(Diferencial(0.3));
	diff.push_back(Diferencial(0.9));
	diff.push_back(Diferencial(0.8));
	vector<Ciguenal>cigue;
	//crear ciguenal
	cigue.push_back(Ciguenal(200,40));
	cigue.push_back(Ciguenal(300, 60));
	cigue.push_back(Ciguenal(500, 80));
	while (opcion != 0) {
		cout << "1.Crear Auto\n2.Modificar\n3.Ordenar\n4.Carrera\n0.Salir"<<endl;
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
			cout << "Se agrego correctamente!" << endl;
			break;
		case 2:
			if (carros.empty()) {
				cout << "Tiene que crear carros primero";
			}
			else {
				imprimir(carros);
			}
			break;
		case 3:
			cout << "Ordenar autos"<<endl<<"Autos existentes"<<endl;
			imprimir(carros);
			cout << "1.Velocidad Maxima\n2.Caballos de fuerza\n3.Aceleracion"<<endl;
			cin >> opcionor;
			switch (opcionor)
			{
			case 1:
				for (int i = 0; i < carros.size(); i++)
				{
					for (int j = i+1; j < carros.size(); j++)
					{
						if (carros.at(i).getvelmax()>carros.at(j).getvelmax()) {
							ordenar.push_back(carros.at(i));
						}
					}
				}
				imprimir(ordenar);
				ordenar.clear();
				break;
			case 2:
				for (int i = 0; i < carros.size(); i++)
				{
					for (int j = i + 1; j < carros.size(); j++)
					{
						if (carros.at(i).getcaballosf() > carros.at(j).getcaballosf()) {
							ordenar.push_back(carros.at(i));
						}
					}
				}
				imprimir(ordenar);
				ordenar.clear();
				break;
			case 3:
				for (int i = 0; i < carros.size(); i++)
				{
					for (int j = i + 1; j < carros.size(); j++)
					{
						if (carros.at(i).getaceleracion() > carros.at(j).getaceleracion()) {
							ordenar.push_back(carros.at(i));
						}
					}
				}
				imprimir(ordenar);
				ordenar.clear();
				break;
			}
			break;
		case 4:
			cout << "Carrera"<<endl;
			imprimir(carros);
			cout << "Seleccione el carro 1 para correr: ";
			cin >> carroP1;
			cout << "Seleccione el carro 2 para correr: ";
			cin >> carroP2;
			carrera(carros,carroP1,carroP2);
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