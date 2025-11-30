#include <iostream>
using namespace std;

void minute_second(int a)
{
    int minute = (a / 60) % 60;
    int second = a % 60;

    cout << minute << " deqiqe" << endl;
    cout << second << " saniye" << endl;
}

void hour_part(int a)
{
    int hour = a / 3600;
    cout << hour << " saat" << endl;
}

int main()
{
    int a;
    cin >> a;

    hour_part(a);
    minute_second(a);
    return 0;
}
