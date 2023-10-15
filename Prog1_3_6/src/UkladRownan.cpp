#include "UkladRownan.h"

UkladRownan::UkladRownan(float a0, float b0, float a1, float b1)
{
    this->a0 = a0;
    this->b0 = b0;
    this->a1 = a1;
    this->b1 = b1;
    Rozwiaz();
}

void UkladRownan::Rozwiaz()
{
    if (a0 == a1 && b0 != b1)
    {
        typRozwiazania = BrakRozwiazan;
    }
    else if (a0==a1 && b0==b1)
    {
        typRozwiazania = NieskonczenieWieleRozwiazan;
    }
    else
    {
        typRozwiazania = JednoRozwiazanie;
        x = (b0-b1)/(a1-a0);
        y = a0*x + b0;

    }
}

UkladRownan::~UkladRownan()
{
    //dtor
}
