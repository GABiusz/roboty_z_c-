#include <iostream>
#include <fstream>

using namespace std;

class Obraz{
	public: 
	int t[21][7],i,spr_czy_fal;
	fstream plik;
	string linia;
	bool fal_pod;
	
	
	void otwPlik(){
	plik.open("obraz.txt",ios::in);
	
	};
	void sprPod(){
		while (getline(plik,linia)){
	for (int i=0; i<10; i++){
	if (linia[i] =! linia[i + 10]) spr_czy_fal++;
}
		
	} 
	
	};
	
	void falBool(){
	if (spr_czy_fal =! 0){
		cout << "nie sa takie same\n";
	}
	else {
		cout << "sa takie same\n";
	}
	};
	
	void zamPlik(){
	plik.close();
	
	};
};

Obraz tekstowy;

int main(){
	tekstowy.otwPlik();
	tekstowy.sprPod();
	tekstowy.falBool();
	tekstowy.zamPlik();
	
	
}
