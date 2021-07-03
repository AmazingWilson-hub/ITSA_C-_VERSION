#include <string.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int input;
    while (cin >> input)
    {
        if (input == 3 || input == 4 || input == 5)
        {
            cout << "Spring" << endl;
        }
        else if (input == 6 || input == 7 || input == 8)
        {
            cout << "Summer" << endl;
        }
        else if (input == 9 || input == 10 || input == 11)
        {
            cout << "Autumn" << endl;
        }
        else if (input == 12 || input == 11 || input == 2)
        {
            cout << "Winter" << endl;
        }
    }
}