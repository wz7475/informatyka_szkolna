#include <iostream>
#include <cmath>
using namespace std;

double f(int x)
{
    return 2 * x * x - 3 * x + 2;
}

double funkcja(int x)
{
    return x;
}

void pole_pod_wykresem()
{
    double p=2, q=6, dl, a = 0, b = 0;
    int n;
    cout << "podaj ilos przedzialow:" << endl;
    cin >>  n;
    dl = (q - p) / n;
    for (int i = 1; i <= n; i++)
    {
        a += fabs(f(p + dl * (i - 1)));
        b += fabs(f(p + dl * i));
    }
    cout << 0.5 * (a + b) * dl << endl;
}

int main()
{
    pole_pod_wykresem();
    system("pause");
    return 0;
}
