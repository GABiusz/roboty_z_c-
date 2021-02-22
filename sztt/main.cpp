#include <iostream>
#include <string>
using namespace std;
class krojenie{
	public: 
	string str1,str2,str3;
	public:
	void wprowadz(){
	cin >> str1;
	};
	void przecinanie(){
	str2 = str1.substr(0,str1.length()/2);
	str3 = str1.substr(str1.length()/2,str1.length());
	
	}
	
	
	void wypisz(){
	cout << str2 << "\n" << str3 << "\n";
		
	};
	
};
int main(){
krojenie lit;
lit.wprowadz();
lit.przecinanie();
lit.wypisz();
}
