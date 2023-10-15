#include <iostream>
#include <math.h>
#include <string>

using namespace std;

//1.2.9 Napisz program, który wczytuje ze standardowego wejścia
//nieujemną liczbę wymierną x i wypisuje na standardowym wyjściu
//√x.

int main()
{
    float j;
    cin >>j;
    cout << (j>=0 ? to_string(sqrt(j)) : to_string(sqrt(-j)).append("i")) << endl;
    return 0;
}
