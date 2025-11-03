#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nece eded daxil etmek isteyirsiniz? ";
    cin >> N;

    if (N <= 0) {
        cout << "Duzgun say daxil edin!" << endl;
        return 0;
    }
    double sum = 0;
    int num;
    int min, max;
    cout << "Ededleri daxil edin:\n";
    for (int i = 0; i < N; i++) {
        cin >> num;
        sum += num;  
        if (i == 0) {    
            min = max = num;
        }
        else {
            if (num < min) min = num;
            if (num > max) max = num;
        }
    }
    double average = sum / N;  
    cout << "En kicik eded: " << min << endl;
    cout << "En boyuk eded: " << max << endl;
    cout << "Ortalama: " << average << endl;
    return 0;
}
