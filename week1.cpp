#include <iostream>
#include <string>
using namespace std;


void Les1_Assignment1()
{
    cout << (char)('g'-('a'-'A')) << endl;
    cout << (int)'a' << endl;
    cout << (int)'b' << endl;
    cout << (int)'c' << endl;
    cout << (int)'h' << endl;
    cout << (char)('4' - '0') << endl;
    cout << ('4' - '0') << endl;
    cout << (int)('4' - '0') << endl;
}
void Les1_Assignment2()
{
    /*
     * x = 8
     * c = B
     * f = 8
     * u = false
     * p = Hoera! HIEP!
     * station = Driebergen-Zeist
     * plaats = Driebergen
     * y = 3
     * z = 3
     * t = 3
     * s = 3.6
     * e = 1
     * b = 1 (true)
     *
     */
}
void Les1_Assignment3()
{
    /* MEERDERE WAARDES PER LOOP ( number++ verhoogt number ook al met 1 voor number < 80, daarna nog met 3 (altijd) )
     * 65
     * 70
     * 73
     * 74
     * 77
     * 78
     * 81
     * 84
     * 87
     * 90
     *
     */
}
void Les1_Assignment4()
{
    //deze functie schrijft het alfabet, per letter, gescheiden door een comma tussen twee letters.
}
void Les1_Assignment5()
{
    char a = 0;
    cout << string("Geef een character:");
    cin >> a;
    printf("%c%s%d%s%d%s", a, " + ", 32, " = ", a+32, "\r\n");
    printf("%c%s%d%s%c%s", a, " + ", 32, " = ", char(a+32), "\r\n");
}
void Les1_Assignment6_FOR()
{
    int pyramid_height = 5;
    for(int i =1; i< pyramid_height; i++)
    {
        cout << string(i,'*') << endl;
    }
    for(int i =pyramid_height; i > 0; i--)
    {
        cout << string(i,'*') << endl;
    }
}
void Les1_Assignment6_WHILE()
{
    int pyramid_height = 5;
    int i= 1;
    while(i < pyramid_height)
    {
        int j = 0;
        while(j < i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        //cout << string(i,'*') << endl; was sneller...
        i++;
    }
    while(i > 0)
    {
        int j = 0;
        while(j < i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        //cout << string(i,'*') << endl; was sneller...
        i--;
    }
}
void Les1_Assignment7()
{
    int pyramid_height = 5;
    //Gekozen voor for-loops omdat ze compacter zijn en perfect werken voor dit doeleind.
    for(int i =1; i< pyramid_height; i++)
    {
        string sterretjes = string(i,'*');
        string lucht = string(pyramid_height-i,' ');
        cout << lucht + sterretjes << endl;
    }
    for(int i =pyramid_height; i > 0; i--)
    {
        string sterretjes = string(i,'*');
        string lucht = string(pyramid_height-i,' ');
        cout << lucht + sterretjes << endl;
    }
}
void Les1_Assignment8()
{
    int n = -1;
    cout << "Geef getal van gevraagde tafel: ";
    cin >> n;
    if(!(100 >= n > 0))
    {
        exit(1);
    }
    for(int i = 1; i <= 10; i++)
    {
        printf("%2d * %2d = %4d\r\n",n,i,n*i);
    }
}
void Les1_Assignment9()
{
    string test = "Hallo Jij Bent De Tester";
    for(char c : test)
    {
        if(c == 'e')
        {
            cout << (char)'3';
        }
        else if(c == 'l')
        {
            cout << (char)'1';
        }
        else if(c == 't')
        {
            cout << (char)'7';
        }
        else if(c == 'o')
        {
            cout << (char)'0';
        }
        else if(c == ' ')
        {
            cout << (char)' ';
        }
        else
        {
            cout << (char)toupper(c);
        }
    }
}
int main()
{
    Les1_Assignment6_WHILE();
    return 0;
}
