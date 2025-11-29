#include <iostream>
using namespace std;

void findMax(int a, int b, int c)
{
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    findMax(a, b, c);
}
