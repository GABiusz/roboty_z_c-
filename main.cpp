#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
fstream plik;
string linia;
int n, min, max;
int main(){

	
	plik.open("liczby1.txt",ios::in);
if (plik.is_open()){
	
	while (getline(plik, linia))
	{
		
	n = stoi(linia);
	if (n < min){
		min = n;
	}
		if (n > min){
		max = n;
	}
	
	}
}
	cout << oct << min << endl;
	cout << oct << max << endl;
	cin.ignore();
	cin.get();
	return 0;
}
