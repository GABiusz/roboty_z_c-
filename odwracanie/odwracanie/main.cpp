#include <iostream>
#include <fstream>

using namespace std;

int lic,i=1, ilosc ;

string z;

int main()
{


{

    cout << "podaj liczby do odwrocenia ";
    cin >> lic;

    cout << endl;
    int t[lic];
     ofstream fileload;
    fileload.open ("C:/Users/gburz/Desktop/odwracanie//save.txt");{
        for (i;i<=lic;i++){




        fileload << i << endl;
        }

    ifstream plik;
    plik.open ("C:/Users/gburz/Desktop/odwracanie//save.txt");


      if(plik.good())
     while(!plik.eof()) for (i=0;i<lic;i++){
        plik >> i;

         ilosc = i;

     }
     cout << i << endl;


        plik.close();

    ofstream plik2;
    plik2.open ("C:/Users/gburz/Desktop/odwracanie//load.txt");{
        for (i;i>0;i--){
        plik2 << i << endl;
         ilosc = i;
        }
    cout << ilosc << endl;
        plik2.close();
    }






        cout<<endl;





    }





    return 0;
}
}
