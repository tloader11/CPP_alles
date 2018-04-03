#include <iostream>
#include <vector>

using namespace std;

int maximum(vector<int> lijst, int size)
{
    if(size==1) return lijst[0];
    else
    {
        int max = maximum(lijst, size-1);
        if(max >  lijst[size-1])
        {
            return max;
        }
        else
        {
            return lijst[size-1];
        }
    }
}

int vijf_vijf_main()
{
    vector<int> numbers = {6,3,7,188,8,2,34};
    cout << maximum(numbers, numbers.size()); //34
    return 0;
}