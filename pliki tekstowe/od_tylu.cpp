#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream plik1, plik2;
    string linia, calosc = "";
    plik1.open("text.txt", ios::in);
    plik2.open("od_tylu.txt", ios::out);

    while (!plik1.eof())
    {
        getline(plik1, linia);
        calosc += linia;
    }
    for(int i=calosc.size()-1; i>=0; i--)
    {
        //cout<<i<<" ";
        plik2 << calosc[i];
    }
    plik1.close();
    plik2.close();

    return 0;
}