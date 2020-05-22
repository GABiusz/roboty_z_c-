#include <iostream>

using namespace std;
int a,wprowadz[5];

int main()
{
    do {
        cout << "podaj 5 liczb nieparzystych" << endl;
    for (a=0;a<5;a++){

            cin >> wprowadz[a];
            if (wprowadz[a]%2==0) {
                cout << "podales liczbe parzysta, sprobuj jeszcze raz" << endl;

                break;
            }

    }
    } while (a!=5);

    for (a=0;a<5;a++) {
    cout << "oto " << a+1 << ". liczba ktora podales" << endl << wprowadz [a] << endl;
    }
    return 0;
}
