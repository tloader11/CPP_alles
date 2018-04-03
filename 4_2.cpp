#include <vector>
#include <iostream>
#include <limits>
#include "4_2.hpp"
using namespace std;


vector<float> top3(vector<float> scores)
{
    float first = std::numeric_limits<float>::max();
    float second = std::numeric_limits<float>::max();
    float third = std::numeric_limits<float>::max();
    for(float score : scores)
    {
        first = min(score,first);
    }
    for(float score : scores)
    {
        if(min(score,second)==score && score != first)
            second = score;
    }
    for(float score : scores)
    {
        if(min(score,third)==score && score != first && score != second)
            third = score;
    }
    return vector<float>{first,second,third};
}

float second2last(vector<float> scores)
{
    float traagst = std::numeric_limits<float>::min();
    float mol = std::numeric_limits<float>::min();
    for(float score : scores)
    {
        traagst = max(score,traagst);
    }
    for(float score : scores)
    {
        if(max(score,mol) == score && score != traagst)
            mol = score;
    }
    return mol;
}

int vier_twee_main(){
    vector<float> results = {5.322,8.76,2.12,745.9,8.1,23.6,87.3};

    vector<float> top = top3(results); //variabele naam NIET het zelfde als functienaam maken AUB!!! Veel debug tijd voor zoiets stoms uit de PracticumPPC_v5.
    float mole = second2last(results);

    cout << "De top 3 is: " << top[0] << ", " << top[1] << ", " << top[2] << "\n";
    cout << "De mol is: " << mole << "\n";
}