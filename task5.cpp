#include <iostream>
using namespace std;

void edediorta(double a, double b, double c)
{
    double orta = (a + b + c) / 3;
    cout << "Ededi orta: " << orta << endl;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    edediorta(a, b, c);

    return 0;
}

