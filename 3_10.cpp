#include <iostream>
#include <vector>

using namespace std;

vector<int> countIntPerColumn(const vector<vector<int>> &haystack , const int &needle)
{
    unsigned int resultsize = 0;
    for(vector<int> row : haystack)
    {
        resultsize = max(row.size(),resultsize);
    }

    vector<int> result(resultsize);

    for(unsigned int i =0; i < resultsize; i++)
    {
        int counter = 0;
        for(vector<int> row : haystack)
        {
            if(i<row.size())
            {
                if(row[i]==needle)
                {
                    counter++;
                }
            }
        }
        result[i]=counter;
    }
    return result;

}
vector<int> countIntPerRow(const vector<vector<int>> &haystack , const int &needle)
{
    vector<int> result(haystack.size());
    for(int i=0; i < haystack.size(); i++)
    {
        vector<int> row = haystack[i];
        int counter = 0;
        for(int j : row)
        {
            if(j==needle)
            {
                counter++;
            }
        }
        result[i] = counter;
    }
    return result;
}


int drie_tien_main()
{
    vector<int> numInColumnCount = countIntPerColumn({{1,3,99},{66,335,5,5,5},{1,6,5,34,0,0,0,3,5}}, 5);
    for(int count : numInColumnCount)
    {
        cout << "In deze KOLOM zat het gewenste nummer " << count << "x !" << endl;
    }
    vector<int> numInRowCount = countIntPerRow({{1,3,99},{66,335,5,5,5},{1,6,5,34,0,0,0,3,5}}, 5);
    for(int count : numInRowCount)
    {
        cout << "In deze RIJ zat het gewenste nummer " << count << "x !" << endl;
    }
    return 0;
}