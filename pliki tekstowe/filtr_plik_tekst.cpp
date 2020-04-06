#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool sprawdz(string n, char c)
{
    int dl = n.size();
    if (n[dl -1] == c)
        return true;
    return false;
}

int main()
{
    fstream plik1, plik2;
    string linia;
    plik1.open("dane.txt", ios::in);
    plik2.open("filtr.txt", ios::out);
    while(!plik1.eof())
    {
        getline(plik1, linia);
        if(sprawdz(linia, 'A'))
        {
            plik2 << linia << endl;
        }
    }
    plik1.close();
    plik2.close();

    return 0;
}