
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double chinese, english, math, allavg = 0, cavg = 0, eavg = 0, mavg = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> chinese >> english >> math;
        allavg += chinese + english + math;
        cavg += chinese;
        eavg += english;
        mavg += math;
    }
    allavg = (floor((allavg / (3 * n)) * 10 + 0.5)) / 10;
    cavg = (floor((cavg / n) * 10 + 0.5)) / 10;
    eavg = (floor((eavg / n) * 10 + 0.5)) / 10;
    mavg = (floor((mavg / n) * 10 + 0.5)) / 10;
    cout << fixed << setprecision(1) << allavg << " " << cavg << " " << eavg << " " << mavg << endl;
    return 0;
}