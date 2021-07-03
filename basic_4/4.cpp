#include <string.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int start_hour;
    int start_minute;
    int end_hour;
    int end_minute;
    double i;
    double stay_time;
    int pay = 0;
    cin >> start_hour >> start_minute >> end_hour >> end_minute;
    if (end_hour - start_hour > 0)
    {
        if (end_minute - start_minute > 0 && end_minute - start_minute < 30)
        {
            stay_time = end_hour - start_hour;
        }
        else if (end_minute - start_minute > 0 && end_minute - start_minute > 30)
        {
            stay_time = end_hour - start_hour;
            stay_time = stay_time + 0.5;
        }
        else if (end_minute - start_minute == 0)
        {
            stay_time = end_hour - start_hour;
        }
        else if (end_minute - start_minute < 0)
        {
            stay_time = end_hour - start_hour;
            stay_time = stay_time - 0.5;
        }
    }
    else if (end_hour - start_hour == 0)
    {
        if (end_minute - start_minute > 0 && end_minute - start_minute < 30)
        {
            stay_time = 0;
        }
        else if (end_minute - start_minute > 0 && end_minute - start_minute > 30)
        {
            stay_time = 0.5;
        }
        else if (end_minute - start_minute == 0)
        {
            stay_time = 0;
        }
    }

    if (stay_time > 0)
    {
        for (i = 0; i < stay_time; i = i + 0.5)
        {
            if (i < 2)
            {
                pay = pay + 30;
            }
            else if (i >= 2 && i < 4)
            {
                pay = pay + 40;
            }
            else
            {
                pay = pay + 60;
            }
        }
        cout << pay << endl;
    }
    else
    {
        cout << pay << endl;
    }
}