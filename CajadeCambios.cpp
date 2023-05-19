#include "CajadeCambios.h"

CajadeCambios::CajadeCambios(float ace,int vel) {
    aceleracion = ace;
    velmax = vel;
}
float CajadeCambios::getaceleracion()
{
    return aceleracion;
}

int CajadeCambios::getvelocidad()
{
    return velmax;
}
