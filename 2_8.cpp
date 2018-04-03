#include <iostream>
#include <vector>

using namespace std;

float gemiddeld(const vector<int> & lijst)
{
    float i = 0;
    for(int add : lijst)
    {
        i += add;
    }
    return i/lijst.size();

}

int twee_acht_main()
{
    cout << gemiddeld(vector<int>{1,1,-5,9,1,1,1,1});
    //cout << "666"; //print 2
    return 0;
}