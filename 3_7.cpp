#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> getIndexes(const vector<vector<char>> & charMatrix, const char & c)
{
    //charMatrix = haystack
    //c = needle
    vector<vector<int>> result(charMatrix.size());
    for(int i = 0; i < charMatrix.size(); i++)
    {
        for(int j=0; j < charMatrix[i].size(); j++)
            {
                if(charMatrix[i][j]==c)
                {
                        result[i].push_back(j);
                }
            }
        }
    return result;
}

int drie_zeven_main()
{
    vector<vector<int>> indexes = getIndexes({{'s','s','b','m','z'},{'7','2','a','z','z','z'},{'z'}}, 'z');

    for(int i =0; i < indexes.size(); i++)
    {
        for(int index : indexes[i])
        {
            cout << "Row " << i << " at index " << index << endl;
        }
    }

    return 0;
}