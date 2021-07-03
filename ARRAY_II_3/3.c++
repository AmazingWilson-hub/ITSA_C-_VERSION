#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int student_num;
    int i;
    cin >> student_num;
    // cout << student_num << endl;
    int score[student_num];
    for (i = 0; i < student_num; i++)
    {
        cin >> score[i];
    }
    std::sort(score, score + student_num);
    for (i = 0; i < student_num; i++)
    {
        cout << score[i] << endl;
    }
}