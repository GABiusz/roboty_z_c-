#include <iostream>
#include <bitset>

#include <string>
using namespace std;
unsigned a,b;
int main()
{
    cin >> a;
    cin >> b;

    bitset<8>bina(a);
    bitset<8>binb(b);




    cout << bina << endl;
    cout << binb << endl;



  string mystring =
    bina.to_string<char,std::string::traits_type,std::string::allocator_type>();

  cout << "mystring: " << mystring << '\n';

   string mystring1 =
    binb.to_string<char,std::string::traits_type,std::string::allocator_type>();

  cout << "mystring1: " << mystring1 << '\n';

  unsigned x = mystring.length();
   unsigned y = mystring1.length();

   mystring.insert(x,"0");
  mystring.erase(0,1);
  mystring1.erase(y-1,y);
  mystring1.insert(0,"0");

   cout << "przesuniecie w lewo " << mystring << endl;
   cout << "przesuniecie w prawo " <<mystring1 << endl;





    return 0;
}

