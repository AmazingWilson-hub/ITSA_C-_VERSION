#include <string.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    double input;
    double result;
    while (cin >> input)
    {
        input = input * 1.6;
        cout << fixed << setprecision(1) << input << endl;
    }
}