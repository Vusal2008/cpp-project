#include <iostream>
using namespace std;

void eded(int a)
{
    int b = 0;
    for (int i = 1; i <= a; i++)
        b += i;

    cout << "cem: " << b << endl;
}

int main()
{
    int a;
    cin >> a;
    eded(a);
    return 0;
}

