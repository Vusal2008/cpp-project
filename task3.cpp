#include <iostream>
using namespace std;

void comparison(int a, int b)
{
    if (a > b)
        cout << "boyuk olan eded: " << a;
    else if (a < b)
        cout << "boyuk olan eded: " << b;
    else
        cout << "ededler beraberdir";
}

int main()
{
    int a, b;
    cin >> a >> b;
    comparison(a, b);
    return 0;
}

