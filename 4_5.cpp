#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void compress(string src_filename, string dest_filename)
{
    string line;
    ifstream rawfile (src_filename);
    if (rawfile.is_open())
    {
        ofstream outputFile(dest_filename);
        while (getline(rawfile, line))
        {
            string result;
            for(char c : line)
            {
                if(c!=' ' && c!='\t') result+=c;
            }
            if(result.size() > 0)outputFile << result << '\n';
        }
    }
}

int vier_vijf_main()
{
    compress("C:\\Users\\universal\\CLionProjects\\ppc-week-4-tloader11\\4_5_raw.txt", "C:\\Users\\universal\\CLionProjects\\ppc-week-4-tloader11\\4_5_compressed.txt");
    return 0;
}