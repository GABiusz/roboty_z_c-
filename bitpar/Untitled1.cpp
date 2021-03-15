#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Bit{
	public: 
	int i,wyn,ilo_wier;
	fstream plik;
	string linia;
	
	
	
	void otwPlik(){
	plik.open("bit.txt",ios::in);
	
	};
	void linWczt(){
		
		while (getline(plik,linia)){
			wyn = 0;
			ilo_wier++;
			int linia_int[linia.length()]; 
	for (int i=0; i<=linia.length(); i++){
	 linia_int[i]= stoi(linia[i]);
	 wyn += linia_int[i];
	 if (wyn % 2 == 0){
	 	linia[linia.length()+1] = "0"; 
	 }
	 else {
	 	linia[linia.length()+1] = "1";
	 }
	 cout << wyn << "\n";
	
}
		
	} 
	
	};
	

	void zamPlik(){
	plik.close();
	
	};
};

Bit wyk;

int main(){
	wyk.otwPlik();
	wyk.linWczt();
	wyk.zamPlik();
	
	return 0;
}
