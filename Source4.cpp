#include <iostream>
using namespace std;

int main () {

    int cislo[2000], dd, n, h, hm, max, min;

    cout << "Zadaj velkost pola (MAX 2000): ";
    cin >> n;
    if (n > 2000 || n < 0) {
        cout << "Chyba!" << endl;
        return 0;
    }

    cout << "Zadajte prvky pola: " << "\n";
    for (int i = 0; i < n; i++) {
        cin >> cislo[i];
    }

    max = cislo[0];
    for (int i = 0; i < n; i++) {
        if (max < cislo[i])
            max = cislo[i];
    }
    min = cislo[0];
    for (int i = 0; i < n; i++) {
        if (min > cislo[i])
            min = cislo[i];
    }
    cout << "Najvacsi prvok: " << max << endl;
    cout << "Najmensi prvok: " << min << endl;

    return 0;
}