#include <iostream>

using namespace std;
struct film {
string tytul;
string rezyser;
int rok;
string gatunek;
int czas_trwania;
};

int main()

{

film m[5];
int i;
do {


for (i=0;i<5;i++){
    cout << "podanie tytulu" <<endl;
    cin >> m[i].tytul;


        cout << "podanie rezysera" << endl;
        cin >> m[i].rezyser;



        cout << "podanie gatunku" <<endl;
    cin >> m[i].gatunek;
          cout << "podanie roku (podajemy liczbe)" <<endl;
    cin >> m[i].rok;
              cout << "podanie czasu trwania (podajemy liczbe w minutach)" <<endl;
              cin >> m[i].czas_trwania;



 } } while (i!=5);
 do {
 for (i=0;i<5;i++){
    cout << m[i].tytul << endl;
    cout << m[i].rezyser << endl;
    cout << m[i].gatunek << endl;
    cout << m[i].rok << endl;
    cout << m[i].czas_trwania << endl;
 } } while (i!=5);
 if (    m[0].czas_trwania> m[1].czas_trwania && m[2].czas_trwania && m[3].czas_trwania && m[4].czas_trwania){

    cout << "pierwszy film jest najdluzszy";
 }
  else if (    m[1].czas_trwania> m[0].czas_trwania && m[2].czas_trwania && m[3].czas_trwania && m[4].czas_trwania){

    cout << "drugi film jest najdluzszy";
 }
 else if (    m[2].czas_trwania> m[1].czas_trwania && m[0].czas_trwania && m[3].czas_trwania && m[4].czas_trwania){

    cout << "trzeci film jest najdluzszy";
 }
 else if (    m[3].czas_trwania> m[1].czas_trwania && m[2].czas_trwania && m[0].czas_trwania && m[4].czas_trwania){

    cout << "czwarty film jest najdluzszy";
 }
 else if (    m[4].czas_trwania> m[1].czas_trwania && m[2].czas_trwania && m[3].czas_trwania && m[0].czas_trwania){

    cout << "piaty film jest najdluzszy";
 }



    return 0;
}
