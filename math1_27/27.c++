#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    int input, j;
    int i = 0;
    int result = 0;

    while (cin >> input >> j)
    {
        if (input > j)
        {
            for (i = j; i <= input; i++)
            {
                result = result + i;
            }
        }
        else
        {
            for (i = input; i <= j; i++)
            {
                result = result + i;
            }
        }
        cout << result << endl;
        result = 0;
    }
}