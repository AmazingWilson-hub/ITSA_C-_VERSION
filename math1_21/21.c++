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
    long long result = 1;

    while (cin >> input)    
    {

        for (i = 1; i <= input; i++)
        {
            result = result * i;
        }

        cout << result << endl;
        result = 1;
    }
}