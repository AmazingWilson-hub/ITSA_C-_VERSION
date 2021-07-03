#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int isprime(unsigned long n)
{
    unsigned long i;
    unsigned long x;

    if (n == 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (i * i > n)
            break;

        x = (n / i) * i;
        if (x == n)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned long n;

    while (cin >> n)
    {
        if (isprime(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}