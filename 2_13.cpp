#include <iostream>
#include <vector>
#include <limits>

using namespace std;


bool isSorted(const vector<int> & haystack_vector)
{
    for(int i = 0; i < haystack_vector.size()-1; i++)
    {
        if(haystack_vector[i] > haystack_vector[i+1])
            return false;
    }
    return true;
}

void getVectorDetails()
{
    vector<int> results;
    int input;
    int minimum = numeric_limits<int>::max();
    while(input >= 0)
    {
        cout << "Geef een positief getal of een negatief getal als je wilt stoppen: ";
        cin>>input;
        if(input >= 0)
        {
            results.push_back(input);
            minimum = min(input,minimum);
        }
    }
    string sorted = isSorted(results) ? "De reeks is gesorteerd." : "De reeks is niet gesorteerd.";
    cout << sorted << endl;
    int total = 0;
    for(int i : results)
    {
        total +=i;
    }
    float gemiddeld = (float)total / results.size();
    cout << "De gemiddelde waarde is: " << gemiddeld << endl;
    cout << "De minimum waarde is: " << minimum << endl;
    cout << "De reeks bevat " << results.size() << " getallen." << endl;

}



int twee_dertien()
{
    getVectorDetails();
    return 0;
}