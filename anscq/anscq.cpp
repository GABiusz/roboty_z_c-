#include <iostream>
#include <fstream>

using namespace std;
ifstream plik1,plik2;
string t1[1000],t2[1000];
int l1,l2;
int main(){
	
	plik1.open("plik1.txt");
	plik2.open("plik2.txt");
	
	for (int i = 0; i < 1000; i++){
		plik1 >> oct >> t1[i];
		plik2 >> dec >> t2[i];
		
		if (t1[i] != ""){
		l1++;
		}
		if (t2[i] != ""){
			l2++;
		}
	}
	
	cout << t1 << "\n";
	cout << t2 << "\n";
	cin.ignore();
	cin.get();
	
	return 0;
	
}
