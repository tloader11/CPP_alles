#include <iostream>
#include <vector>

using namespace std;

int gemiddelde(vector<int> lijst, int i, int size)
{
    if (i == -1)
    {
        return gemiddelde(lijst, 0, size)/size;
    }
    else if (i == size-1)
    {
        return lijst[i-1];
    }
    return lijst[i] + gemiddelde(lijst, i + 1, size);
}

int vijf_zes_main()
{
    vector<int> numbers = {6,3,7,188,8,2,34}; //avg = 35
    vector<int> test = {10,12,11,9,13};
    cout << gemiddelde(numbers, -1, numbers.size()+1) << endl;  //35 :)
    cout << gemiddelde(test, -1, test.size()+1) << endl;        //11 :)
    return 0;
}