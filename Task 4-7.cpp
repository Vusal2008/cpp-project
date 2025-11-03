#include <iostream>
using namespace std;
int main() {
    cout << "3 reqemli Armstrong ededler:\n";
    for (int n = 100; n <= 999; n++) {
        int sum = 0;
        int num = n;
        while (num != 0) {
            sum += (num % 10) * (num % 10) * (num % 10); 
            num /= 10; 
        }
        if (sum == n) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}
