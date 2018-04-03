#include <iostream>
#include <vector>

using namespace std;

vector<float> rowSum(const vector<vector<float>> & rows)
{
    vector<float> result(rows.size());
    for(int i =0; i < rows.size(); i++)
    {
        vector<float> row = rows[i];
        float sum = 0.0F;
        for(float f : row)
        {
            sum +=f;
        }
        result[i]=sum;
    }
    return result;
}

int drie_negen_main()
{
    vector<float> somPerRij = rowSum({{1.0F,3.3F,99.9F},{66.6F,33.3F},{1.0F,6.0F,34.0F,0.6F}});
    for(float rowsum : somPerRij)
        cout << rowsum << endl;
    return 0;
}