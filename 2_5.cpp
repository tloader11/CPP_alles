#include <iostream>
#include <vector>
using namespace std;

int count(const vector<int> & numbers, const int & x) {
    int i = 0;
    for(int j : numbers)
    {
        if(x==j) i++;
    }
    return i;
}

int twee_vijf_main()
{
    cout << count(vector<int>{4,2,2,5}, 2); //print 2
    return 0;
}
