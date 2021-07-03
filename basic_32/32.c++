#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    char input[1024];
    int i, j;
    int ln;
    int sw = 0;
    int back;
    fgets(input, 1024, stdin);

    cin >> back;
    ln = strlen(input);
    for (i = 0; i < ln; i++)
    {
        if (isalpha(input[i]) && isupper(input[i]))
        {
            if (input[i] + back > 90)
            {
                input[i] = (back - (90 - input[i])) + 64;
            }
            else
            {
                input[i] = input[i] + back;
            }
        }
        else if (isalpha(input[i]) && islower(input[i]))
        {
            if (input[i] + back > 122)
            {
                input[i] = (back - (122 - input[i])) + 96;
            }
            else
            {
                input[i] = input[i] + back;
            }
        }
        else if (isdigit(input[i]))
        {
            if (input[i] + back > 57)
            {
                input[i] = (back - (57 - input[i])) + 47;
            }
            else
            {
                input[i] = input[i] + back;
            }
        }
    }
    cout << input;
}