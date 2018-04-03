#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mat = { {-1, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                            {-1, 0,-1, 0, 0, 0,-1,-1, 0,-1,-1},
                            {-1, 0,-1, 0,-1,-1,-1, 0, 0, 1,-1},
                            {-1, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1},
                            {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};

int drie_drie_main(){
    for(vector<int> row : mat)
    {
        for(int i : row)
        {
            char output = (i==-1) ? 'x' : '0'+(char)i;
            cout << output;
        }
        cout << endl;
    }
    return 0;
}