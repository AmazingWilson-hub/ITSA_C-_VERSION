#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int i;
    int score[6];
    int max = 0;
    for (i = 0; i < 6; i++)
    {
        cin >> score[i];
    }

    for (i = 0; i < 6; i++)
    {
        max = max + score[i] * score[i] * score[i];
    }
    cout << max;
}