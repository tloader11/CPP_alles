#include <iostream>
#include <vector>

using namespace std;

bool isVectorSorted(const vector<int> & haystack_vector)
{
    for(int i = 0; i < haystack_vector.size()-1; i++)
    {
        if(haystack_vector[i] > haystack_vector[i+1])
            return false;
    }
    return true;
}

int twee_twaalf()
{
    cout << isVectorSorted(vector<int>{11,44,77});
    return 0;
}