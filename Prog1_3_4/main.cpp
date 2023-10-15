#include <iostream>
#include <math.h>

using namespace std;

//1.3.4 Napisz program, który wczytuje ze standardowego wejœcia dwie liczby
//ca³kowite i wypisuje t¹ o wiêkszej wartoœci bezwzglêdnej.

int main()
{
    int l, n;
    cin >> l >> n;
    if ( abs(l)==abs(n) ){
        cout << l << ";" << n;
    } else {
        cout : abs(l)>abs(n) ? l : n;
    }

    return 0;
}
