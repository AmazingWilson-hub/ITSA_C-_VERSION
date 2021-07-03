#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int i, j;
    int max = 0;
    int num;
    int sw = 1;
    cin >> num;
    int score[num];
    for (i = 0; i < num; i++)
    {
        cin >> score[i];
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            // printf("%d %d\n", score[i], score[j]);
            if (i != j)
            {
                if (score[i] == score[j])
                {
                    sw = 0;
                    break;
                }
            }
            if (sw == 0)
            {
                break;
            }
        }
        if (sw == 0)
        {
            break;
        }
    }
    cout << sw << endl;
}