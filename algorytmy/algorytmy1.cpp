#include <iostream>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    while (a != b)
    {
        if (a == b)
            return a;
        else
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
    }
}

int euklides(int a, int b)
{
    while (b)
        swap(a %= b, b);
    return a;
}

int nww(int a, int b)
{
    return a * b / nwd(a, b);
}

int nwd_modulo(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//program badajacy czy punkt nalezy do prostej 3x - 4y -4= 0
bool czy_nalezy(int x, int y)
{
    double d = 3 * x + 4 * y - 4;
    if (d == 0)
        return true;
    else
        return false;
}

//program podajacy odleglosc punktu od prostej takiej jak powyzej
double odleglosc(int x, int y)
{
    return abs(3 * x + 4 * y - 4) / sqrt(pow(3, 2) + pow(-4, 2));
}

//program padajacy czy punkt nalzry do odcinka AB
bool czy_nalezy(int xp, int yp, int xa, int ya, int xb, int yb)
{
    double ab = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    double ap = sqrt(pow(xa - xp, 2) + pow(ya - yp, 2));
    double pb = sqrt(pow(xp - xb, 2) + pow(yp - yb, 2));
    if (ab == ap + pb)
        return true;
    else
        return false;
}

//program liczacy obowod trojkata
double obwod(int xp, int yp, int xa, int ya, int xb, int yb)
{
    double ab = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    double ap = sqrt(pow(xa - xp, 2) + pow(ya - yp, 2));
    double pb = sqrt(pow(xp - xb, 2) + pow(yp - yb, 2));
    if ((ab < ap + pb) && (ap < ab + pb) && (pb < ap + ab))
        return ab + ap + pb;
    else
        return -1;
}

int ile_zer(double liczba)
{
    int licznik = 1;
    while (liczba < 1)
    {
        liczba *= 10;
        licznik++;
    }
    return licznik;
}

void pierwiastek(double p, double d)
{
    double a = p;
    while (abs(a - p / a) > d)
        a = (a + p / a) / 2;
    cout << setprecision(ile_zer(d)) << a << endl;
}

void dec2bin(int liczba)
{
    int i = 0;
    string tab;
    while (liczba != 0)
    {
        if (liczba % 2 == 1)
            tab[i] = '1';
        else
            tab[i] = '0';
        liczba /= 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
        cout << tab[i];
}

void horner_itreacyjnie()
{
    cout << "podaj stopien wielomainu: ";
    int n, w, x;
    cin >> n;
    cout << "podaj argument (x) : ";
    cin >> x;
    int tab[n];
    cout << "podaj kolejne wspolczynnki:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
        w = w * x + tab[i];
    }
    cout << w;
}
int wsp[20] = {1, 1, 1, 1};
int horner_rekurencyjnie(int wsp[], int st, int x)
{
    if (st == 0)
        return wsp[0];
    return x * horner_rekurencyjnie(wsp, st - 1, x) + wsp[st];
}

void hanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);
        cout << a << "-->" << b << endl;
        hanoi(n - 1, c, b, a);
    }
}

void bin2dec_horner()
{
    cout << "podaj ilosc liczb: ";
    int n;
    cin >> n;
    int A[n];
    cout << "podaj te liczby (odzielone spacje lub enterem): ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int w = A[0];
    for (int i = 0; i < n; i++)
        w = w * 2 + A[i];
    cout << w << endl;
}

void palidrom()
{
    string n;
    cout << "podaj slowo: ";
    cin >> n;
    int dl = n.size();
    for (int i = 0; i < dl / 2; i++)
    {
        if(n[i] != n[dl - i - 1])
        {
            cout<<"nie jest palindromem"<<endl;
            return;
        }    
    }
    cout<<"palindrom"<<endl;
}

int main()
{
    palidrom();
    return 0;
}