#include <iostream>
using namespace std;

void faktor(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;

    cout << f;
}

int main()
{
    int a;
    cin >> a;
    faktor(a);
}
