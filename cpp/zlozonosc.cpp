/*
 * zlozonosc.cpp
 */


#include <iostream>
using namespace std;

// Ln = 1
// Ln = n
// Ln = 0

int main(int argc, char **argv)
{
    int n = 5;
    int tb[n] = {2, 4, 21, 37, 69};
    int i = 0;
    int x = 37;
    for (i = 0; i < n; i++) {
        if (tb[i] == x) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

