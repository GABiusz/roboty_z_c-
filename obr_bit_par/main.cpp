#include <iostream>
#include <fstream>


using namespace std;
fstream plik;

string ob[20][20],linia;
int x = 0,ilo1,ilo0;
int main(){
	plik.open("obrazek.txt");
			while (getline(plik,linia)){
				for (x; x <=20; x++){
				
	for (int i=0; i<=20; i++){
plik >> ob[x][i];
if (ob[x][i] == "1"){
	ilo1++;
}
if (ob[x][i] == "1" && ob[x][i + 1] == "1" && ilo1 % 2 == 1){
	ob[x][i + 2] = "0";
}
cout << ob[x][i] << "\n";
}


		
	} 
}
}
