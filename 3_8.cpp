#include <iostream>
#include <ctime>
//#include <stdlib.h>; deze import is NIET nodig?
using namespace std;

void improveLoveMessage(char & message)
{
    srand(time(0)); //making sure RANDOM is (pseudo-)RANDOM.
    //char = 8 bit.
    int first_random = rand() % 8; //0-7
    int second_random = rand() % 8;
    if(second_random == first_random)
        second_random = rand() % 8; //unique bit, preventing toggling a bit back to original
    int third_random = rand() % 8;
    if(third_random == first_random || third_random == second_random)
        third_random = rand() % 8; //unique bit, preventing toggling a bit back to original
    message ^= 1 << first_random;
    message ^= 1 << second_random;
    message ^= 1 << third_random;

}

int drie_acht_main()
{
    char x = 'a';
    improveLoveMessage(x);
    cout << "Output: " << x << endl; //example: A -> h , a -> -
    return 0;
}
