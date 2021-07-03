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
    long long result;
    while (cin >> input)
    {

        if (input > 31)
        {
            cout << "Value of more than 31" << endl;
        }
        else
        {
            result = 1 << input;
            cout << result << endl;
        }
    }
}