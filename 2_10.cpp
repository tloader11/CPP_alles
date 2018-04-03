#include <iostream>
#include <vector>
using namespace std;

vector<float> sumVectoren(const vector<float> & floatVectA, const vector<float> & floatVectB)
{
    vector<float> sumVector(min(floatVectA.size(),floatVectB.size()));
    for(int i=0; i < min(floatVectA.size(),floatVectB.size()); i++) //preventing FC by preventing nullpointerexception.
    {
        sumVector[i] = floatVectA[i] + floatVectB[i];
    }
    return sumVector;
}

int twee_tien()
{
    vector<float> resultaat = sumVectoren(vector<float>{1.0F,4.0F,3.3F,99.9F},vector<float>{99.0F,6.0F,6.6F,0.1F});
    for (float a : resultaat)
    {
        cout << a << endl;
    }
    return 0;
}
