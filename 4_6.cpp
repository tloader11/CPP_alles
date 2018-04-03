#include <iostream>
using namespace std;

char rotate_char(char ch, int n)
{
    uint8_t base = ch; //beiden 8 bit, dus kan wel... (A)
    if(n>0)
    {
        for(int i = 0; i<n;i++)
        {
            uint8_t mask = base >> 7;//MSB naar LSB kant, rest 0
            base = base << 1; //MSB verwijderen en LSB wordt 0
            base ^= mask; //oude MSB op plaats van LSB.
        }
    }
    else
    {
        for(int i =0; i > n; i--)
        {
            uint8_t mask = base << 7;
            base = base >> 1;
            base ^= mask;
        }
    }
    return base;
}

int vier_zes_main()
{
    cout << rotate_char((char)33,-8); // returns 33 (= !)
    cout << rotate_char((char)33,8); // returns 33  (= !)
    return 0;
}