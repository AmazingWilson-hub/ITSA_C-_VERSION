#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{

    int i, j, k;
    float ln;
    int sw = 0;
    int back;
    int r;
    int q;
    cin >> i >> j;
    cout << i << "+" << j << '=' << i + j << endl;
    cout << i << "*" << j << '=' << i * j << endl;
    cout << i << "-" << j << '=' << i - j << endl;

    r = i % j;
    if (r >= 0)
    {
        cout << i << "/" << j << '=' << i / j << "..." << r << endl;
    }
    else
    {
        int q = i / j;
        if (q < 0)
            q -= 1;
        else
            q += 1;

        r = i - j * q;
        cout << i << "/" << j << '=' << q << "..." << r << endl;
    }
}