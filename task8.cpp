#include <iostream>
using namespace std;

void yoxlama(int a)
{
    if (a <= 1)
    {
        cout << "sade deyil " << a;
        return;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "sade deyil " << a;
            return;
        }
    }

    cout << "sade " << a;
}

int main()
{
    int a;
    cin >> a;
    yoxlama(a);
    return 0;
}

