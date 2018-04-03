#include <iostream>
#include <vector>
#include <limits>

using namespace std;

float minimum(const vector<float> & lijst)
{
    float i = numeric_limits<float>::max(); //init on max value float,, (not using lijst[0], vector<> can be null.
    for(float j =0; j < lijst.size();j++)
    {
        i = min(i,lijst[j]);
    }
    return i;
}

int twee_zeven_main()
{
    cout << minimum(vector<float>{1.0F,1.0F,-5.0F,9.0F,1.0F,1.0F,1.0F,1.0F});
    //cout << "666"; //print 2
    return 0;
}
