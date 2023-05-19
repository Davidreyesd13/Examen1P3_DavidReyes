#include "Diferencial.h"

Diferencial::Diferencial(float ace)
{
	aceleracion = ace;
}

int Diferencial::getaceleracion()
{
	return aceleracion;
}

void Diferencial::setaceleracion(int ace)
{
	aceleracion = ace;
}
