/*
 * zadanie 1_funkcja.cpp
 */


#include <iostream>

using namespace std;
 
    int staz = 1;
    float zarobek = 1000;
    int lata = 1;
 
void drukuj(){
	cout<< "Pracujesz "<< staz << " lat, zarabiasz " << zarobek << "zł" << endl;
    
}
int awans()	{
	staz += 1;
    zarobek = zarobek * 1.1 ;
    return zarobek;
}
 int main(int argc, char **argv){
{	
    cout << "Podaj okres pracy w latach: " << endl;
    cin >> lata;

}
    for (int i = 0; i < lata; i++)	{
    drukuj();
    awans();
}
    return 0;

}
