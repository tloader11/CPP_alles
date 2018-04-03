#include <iostream>


using namespace std;

int diff_loc(const string &a, const string &b)
{
    int length = min(a.size(),b.size());
    for(int i = 0; i < length;i++)
    {
        if(a[i]!=b[i])
        {
            return i;
        }
    }
    if(a.size()!=b.size())
    {
        return min(a.size(),b.size());
    }
    return -1;

}

int twee_negen()
{
    cout << "Het eerste verschil zit op index: " << diff_loc(string("Hij verschilt ergens op een mooie plaats."), string("Hij verschilt ergens op een mooie plaats."));
    return 0;
}