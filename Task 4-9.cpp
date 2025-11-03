#include <iostream>
using namespace std;

int main() {
    cout << "1-den 1000-e qeder palindrome ededler:\n";
  for (int n = 1; n <= 1000; n++) {
        int original = n;
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        if (original == reversed) {
            cout << original << " ";
        }
        n = original; 
    }
    cout << endl;
    return 0;
}
