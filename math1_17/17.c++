#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
#define BUF_SIZE 4096

int gcd(int x, int y);

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            return 0;
        else if (x <= 0 || y <= 0)
            continue;

        cout << gcd(x, y) << endl;
    }
}

int gcd(int x, int y)
{
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
