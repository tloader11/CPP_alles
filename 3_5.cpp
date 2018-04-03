#include <iostream>
#include <vector>

using namespace std;

vector<float> gemiddelde(const vector<vector<int>> & vect)
{
    vector<float> result(vect.size());
    int i = 0;
    int k = 0;
    for(vector<int> x : vect)
    {
        for(int j : x)
        {
            i += j;
        }
        result[k] = (i + 0.0F) / x.size();
        k++;
        i = 0;
    }
    return result;
}


int drie_vijf_main()
{
    vector<vector<int>> testsubject = {{8,44,74,32},{99,3452,34,35},{9,67}};
    vector<float> gem = gemiddelde(testsubject);
    for(float f : gem)
        cout << f << endl;
    return 0;
}