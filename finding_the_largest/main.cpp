#include <iostream>
#include <fstream>
using namespace std;
int a=0, t[200], najwieksza;
int main()
{
        ifstream plik;
    plik.open ("C:/Users/gburz/Desktop/odwracanie//a.txt");
    for (a;a<10;a++){
          plik >>  t[a];





    }
    najwieksza = t [0];


    for (int i=0;i<9;i++){

            if (najwieksza <= t [i+1]){

        najwieksza = t [i+1];

    }

    }

    cout << najwieksza;
    return 0;
}
