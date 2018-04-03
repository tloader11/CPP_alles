#include <iostream>
#include <vector>

using namespace std;

string Palindroom(string word)
{
    int i=0;
    while(i <= word.size()-1-i)
    {
        if(i != word.size()-1-i )
        {
            char temp = word[i];
            word[i] = word[word.size()-1-i];
            word[word.size()-1-i] = temp;
        }
        i++;
    }
    return word;
}

int twee_elf()
{
    vector<string> woorden = vector<string>{"stekkerdoos", "Halloween", "lepel", "flesje", "bommelding"};
    for(string s : woorden)
    {
        cout << Palindroom(s) << endl;
    }
    return 0;
}