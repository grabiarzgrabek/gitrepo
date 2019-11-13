/*
 * anagramybeka.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int r = 5;
	char napis[] ="krabe";
    int i1, i2, i3, i4, i5;
    i2 =1; i3 = 2; i4 = 3; i5 = 4;
    for (i1=0; i1 < r; i1++) {
        for (i2=0; i2 < r; i2++) {
            if (i2 == i1) continue;
            for (i3=0; i3 < r; i3++) {
                if (i3 == i2 || i3 == i1) continue;
                for (i4=0; i4 < r; i4++) {
                    for (i5=0; i5 < r; i5++) {
                        if (i4 == i1 || i4 == i2 || i4 == i3 || i4 == i5) continue;
                        cout << napis[i1] << napis[i2] << napis[i3] << napis[i4] << napis[i5] << endl;
                    }
                }
            }
        }
    }


	return 0;
}
