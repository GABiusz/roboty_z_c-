#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


class Pitagoras{
	public:
		int input1, input2, input3, bufor;
		fstream plik;
		
	void odczPlik(){
	plik.open("trojki.txt",ios::in);	
}
	void obliczPit(){
			while(plik >> input1)
		{
		
		plik >> input2;
		plik >> input3;
		
		//cout << input1 << "   " << input2 << "   " << input3 << "\n" ;
		if(pow(input1,2) > pow(input3,2)){
			bufor = input1;
			input1 = input3;
			input3 = bufor;
		}
		else if ( pow(input2,2) > pow(input3,2)){
			bufor = input2;
			input2 = input3;
			input3 = bufor;
			
		}
		
		if (pow(input1,2) + pow(input2,2) == pow(input3,2)){
			cout << "prawda\n";
		}
		else {
			cout << "falsz\n";
		}
	}
	}
};
int main(){
	Pitagoras twierdzenie;
	twierdzenie.odczPlik();
	twierdzenie.obliczPit();
}
