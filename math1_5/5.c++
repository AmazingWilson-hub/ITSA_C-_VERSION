#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{

    double i, j, k;
    double ln;
    int sw = 0;
    int back;
    while (cin >> i)
    {
        ln = i * i;
        ln = ln + 0.01;
        cout << fixed << setprecision(1) << ln << endl;
    }
}