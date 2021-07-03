#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int i;
    int score[6];
    for (i = 0; i < 6; i++)
    {
        cin >> score[i];
    }

    for (i = 5; i >= 0; i--)
    {
        if (i != 0)
        {
            cout << score[i] << " ";
        }
        else
        {
            cout << score[i] << endl;
        }
    }
}