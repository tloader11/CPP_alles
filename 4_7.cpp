#include <iostream>
#include <vector>

using namespace std;

struct huisdier
{
    string naam;
    string type;
    short leeftijd;
};

struct leerling
{
    string naam;
    short leeftijd;
    vector<float> cijfers;
    huisdier huisdier;
};

struct klas
{
    string naam;
    vector<leerling> leerlingen;
    vector<string> docenten;
};

float gemiddeld_cijfer(const klas &k)
{
    float total = 0.0F;
    unsigned int aantal_cijfers = 0;
    for(leerling l :k.leerlingen)
    {
        for(float cijfer : l.cijfers)
        {
            aantal_cijfers++;
            total+=cijfer;
        }
    }
    return total/aantal_cijfers;
}

int vier_zeven_main()
{
    leerling tristan = {"Tristan ter Haar",19,{10.0F,9.1F},{"Merlin","hond",13}};
    cout << tristan.huisdier.naam << endl; // Merlin
    leerling extra = {"Een extra leerling",19,{7.0F,9.9F},{}};
    klas v1c = {"V1C", {tristan, extra}, {"Jorn Bunk"}};
    cout << gemiddeld_cijfer(v1c); //9  (36 / 4)
    return 0;
}