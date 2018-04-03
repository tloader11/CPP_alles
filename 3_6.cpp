#include <cstdint>
#include <iostream>

using namespace std;

int getBit(uint8_t b, int n)
{

    n +=1; //starting from 0, so shifting 1 till 8
    b = b << 8-n; //most significant removal
    b = b >> 8-n; //restoring to original positions
    int x = b >> n-1; //leading 0's don't matter. Removing trailing. (1 original 1 or 0 remains)
    return x; //return that value
}

int drie_zes_main()
{
    cout << getBit(254,0); //should return 0, returns 0 :) 255,0 returns 1.

    return 0;
}