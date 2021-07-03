#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int i = 0;
    char input[105];
    char test[105];

    cin >> input;
    cin >> test;
    if (strstr(test, input) == NULL)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
