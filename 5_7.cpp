#include <iostream>
#include <vector>

using namespace std;

bool sorted (vector<float> lijst, int size)
{
    if(size<=1) return true;
    else
    {
        if(lijst[size-1] < lijst[size-2])
        {
            return false;
        }
        return sorted(lijst, size-1);
    }
}

int vijf_zeven_main()
{
    vector<float> numbers = {3,4,5,6,7,8}; //ints in een float vector, ach ja..
    vector<float> test = {10.0F,12.0F,11.0F,9.0F,13.0F};
    cout << sorted(test,test.size()) << endl; //false
    cout << sorted(numbers,numbers.size()); //true
    return 0;
}