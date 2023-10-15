#include "Trojkat.h"
#include "math.h"

Trojkat::Trojkat(float a, float b, float c)
{
    float po = (a+b+c)/2;
    float d = (po-a)*(po-b)*(po-c);
    pole = sqrt(po*d);
}

Trojkat::Trojkat(float a, float h)
{
    pole = a * h / 2;
}

Trojkat::~Trojkat()
{
    //dtor
}
