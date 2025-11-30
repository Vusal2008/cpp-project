#include <iostream>
using namespace std;

void Eded(int a)
{
    if (a > 0)
        cout << "eded musbetdir.";
    else if (a < 0)
        cout << "eded menfidir.";
    else
        cout << "eded sifirdir.";
}

int main()
{
    int a;
    cin >> a;
    Eded(a);
    return 0;
}

