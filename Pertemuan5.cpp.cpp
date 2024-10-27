
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Loop for
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

    // menggunakan for loop. 



 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Loop while
    int i = n;
    while (i > 0) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}

    // menggunakan while loop.



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Loop do-while
    int i = n;
    do {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}

    // menggunakan do-while loop.
