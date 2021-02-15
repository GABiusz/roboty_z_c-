#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream plik;
string linia;
	int licznik = 0; 
int main(){

		plik.open("ciagi.txt",ios::in);
	while(getline(plik,linia)){
	for (int i = 1; i<linia.size(); i++) 
   if (linia[i-1]=='1' && linia[i] == '1') 
     licznik++;
}
cout << "1 obok siebie wystapily" << licznik << "razy";
}
