#include <iostream>
#include <cstring>
using namespace std;

string n;
int main()
{
    cout << "podaj napis:\n";
    cin >> n;
    int dl = n.size();
    for (int i = dl - 1; i >= 0; i--)
    {
        cout << n[i];
    }
    cout<<endl;
    system("pause");
    return 0;
}