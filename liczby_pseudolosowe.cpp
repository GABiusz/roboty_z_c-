#include <iostream>
#include <cstdlib>
#include <ctime>
// #include "licz.json"
using namespace std;



void  liczba (int losowa){
    srand(time(NULL));
 losowa = rand()%100+1;
 cout << losowa << endl;
}
//void json (int here){
 // cout << licz << endl;}
int main()
{
    int losowa;
    liczba(losowa);


    return 0;
}
