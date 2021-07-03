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
        for (i = 1; i <= input; i++)
        {
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
}