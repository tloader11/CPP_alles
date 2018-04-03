#include <iostream>
#include <vector>

using namespace std;

struct richting
{
    string richting;
    int afstand;
};

vector<string> map = {"west", "west", "south", "south", "south", "west", "west", "west", "north", "north", "north",
                      "north","north", "west","west","west","west", "west", "west", "south", "south", "south","south",
                      "east", "east", "east", "west", "west", "south", "south", "south", "west", "west", "north",
                      "north", "north", "north", "north", "north", "west", "west", "west", "west", "west", "west",
                      "south", "south", "south", "south", "east", "east", "east", "north", "north", "north", "north",
                      "north", "north", "north", "north", "north", "north", "north", "east", "east", "east", "east",
                      "east", "east", "east", "east", "east", "south", "south", "south", "south", "south", "west",
                      "west", "west", "east", "east", "east", "east", "east", "east", "east", "east", "north", "west",
                      "north", "north", "north", "north", "north", "north", "north", "north", "north", "north"};

vector<richting> r2d2_instructies;


int directionCounter(vector<string> map, string direction, int size)
{
    if(size == 0)
    {
        if(map[size] == direction) return 1;
        return 0;
    }
    else
    {
        if(map[size] == direction)
        {
            return 1 + directionCounter(map,direction,size-1);
        }
        else
        {
            return directionCounter(map,direction,size-1);
        }
    }
}

void load_instructions()
{
    r2d2_instructies.push_back(richting{"noord",directionCounter(map,"north",map.size())});
    r2d2_instructies.push_back(richting{"oost",directionCounter(map,"east",map.size())});
    r2d2_instructies.push_back(richting{"zuid",directionCounter(map,"south",map.size())});
    r2d2_instructies.push_back(richting{"west",directionCounter(map,"west",map.size())});
}

int main()
{
    load_instructions();
    for(richting r : r2d2_instructies)
    {
        cout << "R2D2 moet " << r.afstand << " eenheden " << r.richting << " bewegen." << endl;
    }
    return 0;
}