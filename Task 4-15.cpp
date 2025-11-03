#include <iostream>
using namespace std;

int main() {
    int num;
    int maxNum;

    cout << "Ededleri daxil et (0 daxil etdikde bitir):" << endl;
    cin >> num;

    if (num == 0) {
        cout << "Heç bir eded daxil edilmeyib." << endl;
        return 0;
    }

    maxNum = num; 

    while (num != 0) {
        cin >> num;

        if (num != 0 && num > maxNum) {
            maxNum = num; 
        }
    }

    cout << "En boyuk eded: " << maxNum << endl;
    return 0;
}
