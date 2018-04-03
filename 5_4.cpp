#include <iostream>
#include <vector>
#include "assert.h"
using namespace std;

int counter;

int fibonacci(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int vijf_vier_main(){

    cout << fibonacci(12); //144
    return 0;
}

