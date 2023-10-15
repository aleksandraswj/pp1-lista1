#include <iostream>
#include <UkladRownan.h>
using namespace std;

int main()
{
    float a0;
    float b0;
    float a1;
    float b1;

    cout << "podaj wspolczynniki pierwszego rownania" <<endl;
    cin >> a0 >> b0;
    cout << "podaj wspolczynniki drugiego rownania" <<endl;
    cin >> a1 >> b1;
    UkladRownan ukladRownan(a0, b0, a1, b1);
    switch (ukladRownan.podajTypRozwiazania())
    {
        case BrakRozwiazan                  : cout << "Brak rozwiazan" << endl;
                                              break;
        case NieskonczenieWieleRozwiazan    : cout << "Nieskonczenie wiele rozwiazan" << endl;
                                              break;
        case JednoRozwiazanie               : cout << "x=" << ukladRownan.podajX() << " y=" << ukladRownan.podajY() << endl;
                                              break;
    }

    return 0;

}
