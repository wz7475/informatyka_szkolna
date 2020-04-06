#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

bool filtr(string n)
{
    int dl = n.size();
    if(n[1]=='B' && n[dl - 2] == 'B')
    {
        return true;
    }
    return false;
}

int main()
{
    string linia;
    fstream dane, wyniki;
    dane.open("dane.txt", ios::in);
    wyniki.open("wyniki.txt", ios::out);

    while(!dane.eof())
    {
        getline(dane, linia);
        if(filtr(linia))
        {
            wyniki << linia <<endl;
        }
    }

    dane.close();
    wyniki.close();
    return 0;
}