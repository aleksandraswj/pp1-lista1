#include <iostream>
#include <math.h>
#include <Trojkat.h>
using namespace std;

//1.3.5 Napisz program obliczaj¹cy pole trójk¹ta na podstawie wymiarów
//podanych przez u¿ytkownika. U¿ytkownik powinien mieæ mo¿liwoœæ
//podania d³ugoœci podstawy i wysokoœci lub wszystkich boków trójk¹ta.

const string prompt = "1. Podaj 3 boki ;   2. Podaj podstawe i wysokosc";

void obliczPoBokach(){
    float a;
    float b;
    float c;
    cin >> a >> b >> c;
    Trojkat trojkat(a, b, c);
    cout << trojkat.podajPole();
}

void obliczPoPodstawie(){
    float a;
    float h;
    cin >> a >> h;
    Trojkat trojkat(a, h);
    cout << trojkat.podajPole();
}

int main()
{
    int wybor;
    cout << prompt << endl;
    cin >> wybor;
    if (wybor==1)
    {
        obliczPoBokach();
    } else if (wybor==2)
    {
        obliczPoPodstawie();
    }
    return 0;
}
