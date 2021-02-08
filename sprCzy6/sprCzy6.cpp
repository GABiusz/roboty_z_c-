#include <iostream>

using namespace std;

int i,j;
string liczba;
void sprCzy6(){
cin >> liczba;
for (i = 0; i < liczba.length();i++){
	if (liczba[i] =="6" ){
	}
		j++;
	}
	
}




int main(){

 sprCzy6();
 cout << "w tej liczbie 6 wystepuje "<< j<<" razy\n";
	cin.ignore();
	cin.get();
	return 0;
}
