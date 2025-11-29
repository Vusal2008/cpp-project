#include <iostream>
using namespace std;

void bolenler(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            cout << i << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    bolenler(a);
}
