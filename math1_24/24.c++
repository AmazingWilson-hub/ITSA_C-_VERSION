#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    double input;
    double j = 0;
    int i = 0;
    double result = 0;

    while (cin >> input >> j)
    {

        for (i = 1; i <= input; i++)
        {
            if (i <= 60)
            {
                result = result + j;
            }
            else if (i >= 61 && i <= 120)
            {
                result = result + (j * 1.33);
            }
            else if (i >= 121)
            {
                result = result + (j * 1.66);
            }
        }

        cout << fixed << setprecision(1) << result << endl;

        result = 0;
    }
}