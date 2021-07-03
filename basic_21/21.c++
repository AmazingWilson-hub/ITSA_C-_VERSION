#include <string.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    float input;
    float max = -10000000000;
    float min = 10000000000;
    while (cin >> input )
    {
        if (input > max)
        {
            max = input;
        }
        if (input < min)
        {
            min = input;
        }
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
}