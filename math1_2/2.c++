#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{

    float i, j, k;
    float ln;
    int sw = 0;
    int back;
    while (cin >> i >> j)
    {
        ln = i * j / 2;

        cout << fixed << setprecision(1) << ln << endl;
    }
}