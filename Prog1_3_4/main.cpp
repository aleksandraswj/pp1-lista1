#include <iostream>
#include <math.h>

using namespace std;

//1.3.4 Napisz program, kt�ry wczytuje ze standardowego wej�cia dwie liczby
//ca�kowite i wypisuje t� o wi�kszej warto�ci bezwzgl�dnej.

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
