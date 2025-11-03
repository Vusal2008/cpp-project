#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil et: ";
    cin >> n;

    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10; 
        n /= 10; 
    }

    if (original == reversed) {
        cout << original << " palindrome ededdir." << endl;
    }
    else {
        cout << original << " palindrome eded deyil." << endl;
    }

    return 0;
}
