#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil et: ";
    cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a++; 
        }
    }
    cout << n << " ededinin tam bolenlerinin sayi: " << a << endl;
    return 0;
}
