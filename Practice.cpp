#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "arrayin olcusunu daxil edin: ";
    cin >> a;

    vector<int> array(a);

    cout << "arrayin elementlerini daxil edin:\n";
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }

    cout << "arrayin elementleri:{";
    cout<<array[0];
    for (int i = 1; i < a; i++) {
        cout << ","<< array[i] ;
    }
    cout<<"}";

    return 0;
}

