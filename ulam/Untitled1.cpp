#include <iostream>
#include <fstream>


using namespace std;
ifstream plik;
int linia,x = 0;
double a,b,ming;
int main(){
	plik.open("dane_ulamki.txt");
			while (plik >> linia){
double wyn[x],min;
				plik >> a >> b;
wyn[x] = a/b;
if (wyn[x] < wyn[x - 1]){

min = wyn[x];

}
x++;
ming = min;
}


cout << ming;
		
	

}
