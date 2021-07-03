#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    int input;
    double result;
    while (cin >> input)
    {
        cout << input << " ";
        cout << input * input << " ";

        cout << input * input * input << endl;
    }
}