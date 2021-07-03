#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    float input, i;
    float result;
    while (cin >> input)
    {

        result = input * 9 / 5 + 32;
        cout << fixed << setprecision(1) << result << endl;
    }
}