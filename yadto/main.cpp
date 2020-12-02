#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string tab[20];
     int tab2[20];










   ifstream plik("sze.txt");

   for(int x = 0; x < 20; x++){
    plik >> tab[x];

tab2[x] = stol(tab[x],nullptr,16);

  if (tab[x] % 2 == 1){
tab[x] -= 1;
  }
    cout  << dec << tab2[x] << endl;
   }


    return 0;
}
