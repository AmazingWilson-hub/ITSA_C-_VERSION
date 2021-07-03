#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    int input, i;
    double result;
    while (cin >> input >> i)
    {
        cout << (input + i) * (input + i) << endl;
    }
}