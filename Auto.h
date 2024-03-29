#pragma once
#include <string>
#include "CajadeCambios.h"
#include "Diferencial.h"
#include "Neumaticos.h"
#include "Radiador.h"
#include "Ciguenal.h"
using namespace std;
class Auto
{
private:
	 string marca,modelo;
	 int velmax, caballosf;
	 float aceleracion;
	Ciguenal *c;
	Radiador *r;
	Neumaticos* n;
	Diferencial* d;
	CajadeCambios* cd;
public:
	Auto(string,string, int, int, float);
	void setmarca(string marc);
	void setmodelo(string mode);
	void setvelmax(int vel);
	void setcaballosf(int cf);
	void setaceleracion(float ace);
	string getmarca();
	string getmodelo();
	int getvelmax();
	int getcaballosf();
	float getaceleracion();
};

