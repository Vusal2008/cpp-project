#include <iostream>
using namespace std;

int main() {
    cout << "Reqemlerinin cemi 10 olan 3 reqemli ededler:\n";

    for (int n = 100; n <= 999; n++) {
        int sum = 0;
        int num = n;  
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == 10) {
            cout << n << " ";
        }
    }

    cout << endl;
    return 0;
}
