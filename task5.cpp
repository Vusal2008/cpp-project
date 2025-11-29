#include <iostream>
using namespace std;

void edediOrta(double a, double b, double c)
{
    double orta = (a + b + c) / 3;
    cout << "Ededi orta: " << orta << endl;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    edediOrta(a, b, c);
}
