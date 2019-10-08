/*
 * zadanie_funkcja.cpp
 */


#include <iostream>

using namespace std;

int staz = 1;
float zarobek = 1000;

void drukuj() {
    cout << "Pracujesz " << staz << "lat i zarabiasz " << zarobek << endl;
}

void awans(int &staz, float &zarobek) {
    staz = staz + 1;
    zarobek = zarobek * 1,1;
}

int main(int argc, char **argv)
{
	awans(staz, zarobek);
    drukuj();
	return 0;
}
