#include <iostream>
using namespace std;

struct furniture {
    int number;
    string name;
    float weight;
    float length;
};

int vier_drie_main()
{
    furniture f;
    cout << "Nummer: ";
    cin >> f.number;
    cout << "Naam: ";
    cin >> f.name;
    cout << "Gewicht: ";
    cin >> f.weight;
    cout << "Lengte: ";
    cin >> f.length;

    cout << f.name ;
    printf(" heeft nummer %d, weegt %.2f kilo en is %.0f cm.",f.number,f.weight,f.length);

}

