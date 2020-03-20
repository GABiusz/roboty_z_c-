#include <iostream>
#include <string>
using namespace std;
struct osoba {
	string imie;
	string nazwisko;
	string klasa;
	int wiek;
	double srednia;
};
int main() {
	osoba nauczyciel, uczen1, uczen2;
	 {
		nauczyciel.imie = " Adam ";
		 nauczyciel.nazwisko = "Kowalski";
		nauczyciel.klasa = "1A";
		nauczyciel.wiek= 25;
		nauczyciel.srednia= 0;
		uczen1.imie = "grzegorz";
		uczen1.nazwisko = "burzala";
		uczen1.klasa = "1GTP";
		uczen1.wiek = 16;
		uczen1.srednia = 4.5;
		uczen2.imie ="Anna";
		uczen2.nazwisko= "kwiatkowska";
		uczen2.klasa= "1A";
		uczen2.wiek = 18;
		uczen2.srednia = 4;
	}
	 cout << nauczyciel.imie << endl;
	 cout << nauczyciel.nazwisko << endl;
	 cout << nauczyciel.klasa << endl;
	 cout << nauczyciel.wiek << endl;
	 cout << nauczyciel.srednia << endl;
	 cout << uczen1.imie << endl;
	 cout << uczen1.nazwisko << endl;
	 cout << uczen1.klasa << endl;
	 cout << uczen1.wiek << endl;
	 cout << uczen1.srednia << endl;
	 cout << uczen2.imie << endl;
	 cout << uczen2.nazwisko << endl;
	 cout << uczen2.klasa << endl;
	 cout << uczen2.wiek << endl;
	 cout << uczen2.srednia << endl;
	
}
