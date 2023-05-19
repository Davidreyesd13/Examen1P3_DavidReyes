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
	const string marca,modelo;
	const int velmax, caballosf;
	const float aceleracion;
	Ciguenal *c;
	Radiador *r;
	Neumaticos* n;
	Diferencial* d;
	CajadeCambios* cd;
public:
	Auto(const string,const string,const int,const int,const float);
	~Auto();
	void setmarca(string marc);
	void setmodelo();
	void setvelmax();
	void setcaballosf();
	void setaceleracion();
};

