#include <iostream>
#include <vector>
using namespace std;
void transpose(vector<vector<int>> & m)
{
    for(int i=0; i<m.size();i++)
    {
        for(int j=0;j<m.size();j++)
        {
            if(j >= i && i != j)
            {
                m[i][j]^=m[j][i], m[j][i]^=m[i][j], m[i][j]^=m[j][i]; //optimized. better than "int tmp = m[i][j]; m[i][j] = m[j][i]; m[j][i] = tmp;
            }
            cout << m[i][j] << ",";
            if(m.size() == j+1)
            {
                cout << endl;
            }
        }
    }

}
int drie_elf_main()
{
    vector<vector<int>> team = { {1,2,3}, {4,5,6}, {7,8,9} };
    transpose(team);
    return 0;
}
// x = goed na ronde
// 1:
// x x x
// x - -
// x - -
// volgende ronde moet 1,1 & 1,2 & 2,1 aanpakken, dus j moet groter of gelijk aan i zijn.
// laatste moet gelijk blijven dus alleen 2,2 moet zichzelf aanpassen.


