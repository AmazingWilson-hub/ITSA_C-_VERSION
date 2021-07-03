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

    while (cin >> input)
    {

        for (i = 7; i <= input; i++)
        {
            if (i % 35 == 0)
            {
                if (input - i < 35)
                {
                    cout << i;
                }
                else
                {

                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
}