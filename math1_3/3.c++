#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
    char *input = new char[sizeof(char) * 1024];
    int i, j;
    int ln;
    int sw = 0;
    int back;
    while (cin >> i >> j)
    {
        ln = i + j;
        cout << ln << endl;
    }
}