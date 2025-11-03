#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil et: ";
    cin >> n;

    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

    int i = 1;
    while (i <= n) {
        i *= 2;  
    }
    i /= 2;

    while (i > 0) {
        if (n >= i) {
            cout << 1;
            n -= i;
        }
        else {
            cout << 0;
        }
        i /= 2;
    }

    cout << endl;
    return 0;
}
