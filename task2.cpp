#include <iostream>
using namespace std;

void reqem(int a)
{
    int cem = 0;
    while (a != 0)
    {
        cem += a % 10;
        a /= 10;
    }
    cout << cem;
}

int main()
{
    int a;
    cin >> a;
    reqem(a);
}
