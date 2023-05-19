#include "Auto.h"

Auto::Auto( string Marca,  string Modelo,  int vm,  int cf,  float ace)
{
	marca = Marca;
	modelo = Modelo;
	velmax = vm;
	caballosf = cf;
	aceleracion = ace;
}


void Auto::setmarca( string marc)
{
	marca = marc;
}

void Auto::setmodelo( string mode)
{
	modelo = mode;
}

void Auto::setvelmax(int vel)
{
	velmax = vel;
}

void Auto::setcaballosf(int cf)
{
caballosf=	cf;
}

void Auto::setaceleracion(float ace)
{
	aceleracion = ace;
}

string Auto::getmarca()
{
	return marca;
}

string Auto::getmodelo()
{
	return modelo;
}

int Auto::getvelmax()
{
	return velmax;
}

int Auto::getcaballosf()
{
	return caballosf;
}

float Auto::getaceleracion()
{
	return aceleracion;
}
