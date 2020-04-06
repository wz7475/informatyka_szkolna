#include <iostream>
#include <math.h>
using namespace std;

double funkcja(double x)
{
    return x;
    //return 5 * x * x * x + 4 * x * x + 2 * x + 1;
}

void pole_pod_wykresem_prostokat()
{
    double p, q, dl, h = 0;
    int n;
    cout << "podaj wsp poczat i konc oraz ilos przedzialow:" << endl;
    cin >> p >> q >> n;
    dl = (q - p) / n;
    for (int i = 0; i < n; i++)
    {
        h += fabs(funkcja(p + dl * (i + 0.5)));
    }
    cout << dl * h << endl;
}

void pole_pod_wykresem_trapez()
{
    double p, q, dl, a = 0, b = 0;
    int n;
    cout << "podaj wsp poczat i konc oraz ilos przedzialow:" << endl;
    cin >> p >> q >> n;
    dl = (q - p) / n;
    for (int i = 1; i <= n; i++)
    {
        a += fabs(funkcja(p + dl * (i - 1)));
        b += fabs(funkcja(p + dl * i));
    }
    cout << 0.5 * (a + b) * dl << endl;
}

void miejsc_zerowe()
{
    double p, q, s, ep;
    cout << "podaj p i q, (q > p) i dokl:\n";
    cin >> p >> q >> ep;
    s = (p + q) / 2;
    while (funkcja(p) != 0 && funkcja(q) != 0 && q - p >= ep)
    {
        s = (p + q) / 2;
        if (funkcja(p) == 0)
        {
            cout << p << endl;
            break;
        }
        else if (funkcja(q) == 0)
        {
            cout << q << endl;
            break;
        }
        else if (q - p <= ep)
        {
            cout << s << endl;
            break;
        }
        if (funkcja(p) * funkcja(q) > 0)
        {
            p = s;
        }
        if (funkcja(p) * funkcja(q) < 0)
        {
            q = s;
        }
    }
}

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;
    int end = sqrt(n);
    for (int i = 2; i <= end; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void sito_erastotenesa()
{
    cout << "podaj ilosc liczb (>2):\n";
    int n, e;
    cin >> n;
    int tab[n + 1];
    e = sqrt(n);
    for (int i = 2; i <= n; i++)
    {
        tab[i] = 1;
    }
    tab[0] = 0;
    tab[1] = 0;
    for (int i = 0; i <= e; i++)
    {
        if (tab[i] == 1)
        {
            for (int j = 2; j * i <= n; j++)
            {
                tab[i * j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (tab[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void przeszukiwanie_liniowe()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, x;
    bool czy_jest = false;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    cout << "podaj szukana liczbe:\n";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == x)
        {
            czy_jest = true;
            break;
        }
    }
    cout << czy_jest << endl;
}

void przeszukiwanie_liniowe_podzielne()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, x;
    bool czy_jest = false;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    cout << "podaj liczbe, aby sprawdzic czy w zbiorze sa liczby podziene przez nia:\n";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] % x == 0)
        {
            czy_jest = true;
            break;
        }
    }
    cout << czy_jest << endl;
}

void przeszukiwanie_liniowe_wieksze_od()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, x;
    bool czy_jest = true;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    cout << "podaj liczbe, aby sprawdzic czy wszystkie w zbiorze sa liczby sa wieksze od niej:\n";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > x)
        {
            czy_jest = false;
            break;
        }
    }
    cout << czy_jest << endl;
}

void przeszukiwanie_wartownik()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, x;
    bool czy_jest = true;
    cin >> n;
    int tab[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    cout << "podaj szukana liczbe:\n";
    cin >> x;
    tab[n + 1] = x;
    for (int i = 0; i <= n + 1; i++)
    {
        if (tab[i] == x)
        {
            if (i == n + 1)
            {
                czy_jest = false;
                break;
            }
            break;
        }
    }
    cout << czy_jest << endl;
}

void maksimum()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, max;
    cin >> n;
    int tab[n];
    cin >> tab[0];
    max = tab[0];
    for (int i = 1; i < n; i++)
    {
        cin >> tab[i];
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    cout << max << endl;
}

void minimum()
{
    cout << "podaj ilosc liczb, a nast tyle liczb:\n";
    int n, min, x;
    cin >> x;
    cin >> n;
    min = n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
        }
    }
    cout << min << endl;
}
//lider #1
//lider #2
//czy ciag rosnacy

void lider1()
{
    int n;
    cout << "podaj ilosc elementow, a nast te elementy:\n";
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
        cin>>tab[i];
    int lider = tab[0];
    int pom = 1;
    int ilosc = 1;
    for (int i = 0; i < n; i++)
    {
        if (pom == 0)
        {
            lider = tab[0];
            pom = 1;
        }
        else
        {
            if (tab[i] == lider)
                pom++;
            else
                pom--;
        }
    }
    if(pom==0)
        cout<<"nie ma lidera\n";
    else
    {
        for(int i=0; i<n; i++)
        {
            if(tab[i]==lider)
                ilosc++;
        }
        if(ilosc>n/2)
            cout<<"lider to "<<lider<<endl;
        else
            cout<<"nie ma lidera\n";
    }
    

}

void lider2()
{
    int n, index_lidera=0, ilosc=0;
    cout << "podaj ilosc elementow, a nast te elementy:\n";
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
        cin>>tab[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(tab[j]==tab[i])
                ilosc++;
        }
        if(ilosc>n/2)
        {
            cout<<"lider to "<<tab[i]<<endl;;
            break;
        }
        ilosc=0;            
    }
}

int main()
{
    lider2();
    return 0;
}