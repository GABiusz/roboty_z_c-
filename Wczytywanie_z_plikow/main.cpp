#include <iostream>
#include <fstream>

using namespace std;
string t[100];

int main()

{
    ifstream dlp;
    string a;
    int licznik=0;
    dlp.open("E:\\cody\\Wczytywanie_z_plikow\\dlp.txt");
    if (dlp.good())
    while (!dlp.eof()){
        dlp >> a;
        cout << licznik++<<":"<<a<< endl;

    }dlp.close();


    return 0;
}
