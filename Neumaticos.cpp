#include "Neumaticos.h"

Neumaticos::Neumaticos(float ace)
{
	aceleracion = ace;

}

float Neumaticos::getaceleracion()
{
	return aceleracion;
}

void Neumaticos::setaceleracion(float ace)
{
	aceleracion = ace;
}
