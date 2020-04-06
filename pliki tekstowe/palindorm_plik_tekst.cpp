#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool palidrom(string n)
{
    int dl = n.size();
    for (int i = 0; i < dl / 2; i++)
    {
        if(n[i] != n[dl - i - 1])
        {
            //cout<<"nie jest palindromem"<<endl;
            return false;
        }    
    }
    return true;
}

int main()
{
    fstream plik1, plik2;
    string linia;
    plik1.open("dane.txt", ios::in);
    plik2.open("palindromy.txt", ios::out);
    while(!plik1.eof())
    {
        getline(plik1, linia);
        if(palidrom(linia))
        {
            plik2 << linia << endl;
        }
    }
    plik1.close();
    plik2.close();

    return 0;
}