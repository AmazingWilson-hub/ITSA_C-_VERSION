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
    int i;
    int result = 0;

    while (cin >> input)
    {
        for (i = 0; i <= input; i++)
        {
            if (i % 3 == 0)
            {
                result = result + i;
            }
        }
        cout << result << endl;
        result = 0;
    }
}