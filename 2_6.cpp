#include <iostream>
#include <vector>

using namespace std;

bool controle(const vector<int> & vect)
{
    unsigned int nullen = 0;
    unsigned int enen = 0;
    for(int i : vect)
    {
        i == 1 ? enen+=1 : nullen+=1;
    }
    if(nullen > 12 || enen <= nullen) return false;
    return true;

}

int twee_zes_main()
{
    cout << controle(vector<int>{1,1,0,0,1,1,1,1});
    //cout << "666"; //print 2
    return 0;
}
