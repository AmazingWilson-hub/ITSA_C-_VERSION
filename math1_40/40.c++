#include <string.h>
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

        for (i = 1; i <= input; i++)
        {
            if (i == 1)
            {
                cout << i;
                result = result + i;
            }
            else
            {
                cout << " + " << i;
                result = result + i;
            }
        }
        cout << " = " << result << endl;
    }
}