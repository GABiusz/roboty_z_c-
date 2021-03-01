#include <iostream>
#include <fstream>
using namespace std;

fstream plik;
string linia;
int i, licznik_jedynek;


int main(){
	
plik.open("dane_obrazki.txt",ios::in);	

while (getline(plik,linia)){
	for (int i=0; i<20; i++){
	
	if (linia[i] == '1') licznik_jedynek++;
}
	
}
cout << licznik_jedynek;
}
