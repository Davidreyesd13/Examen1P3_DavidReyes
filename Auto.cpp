#include "Auto.h"

Auto::Auto(const string Marca, const string Modelo, const int vm, const int cf, const float ace)
{
	marca = Marca;
	modelo = Modelo;
	velmax = vm;
	caballosf = cf;
	aceleracion = ace;
}

Auto::~Auto()
{
	if (!marca.empty()&&!modelo.empty()&&velmax!=0&&caballosf!=0&&aceleracion!=0) {
		delete marca,modelo,velmax,caballosf,aceleracion;

	}
}

void Auto::setmarca(string marc)
{
	marca = marc;
}
