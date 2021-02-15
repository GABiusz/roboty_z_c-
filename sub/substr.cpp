#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
fstream plik;
int nr_linii;
string linia;
int main(){
	nr_linii = 0;
	
	string liczba[nr_linii],pol1[nr_linii],pol2[nr_linii];
	int ilo_pol[nr_linii];
	plik.open("ciagi.txt",ios::in);
	if (plik.good()){
	
while(getline(plik,linia)){
	
	liczba[nr_linii] = atoi(linia.c_str());
	ilo_pol[nr_linii] = liczba[nr_linii].length() / 2;
	liczba[nr_linii].substr(0, ilo_pol[nr_linii]) = pol1[nr_linii];
	liczba[nr_linii].substr(ilo_pol[nr_linii], ilo_pol[nr_linii] * 2) = pol2[nr_linii];
	
	if (pol1[nr_linii] == pol2[nr_linii]){
		cout << "polowki sa takie same\n";
	}
	nr_linii++;
}

}
else {
	cout << "nie znaleziono pliku\n";
}
}
