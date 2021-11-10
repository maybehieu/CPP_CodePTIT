#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct dateOB
{
    string ten;
    string date;
};

int main()
{
    int n;
    dateOB sn[100] = {};
    long long arr[105] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> sn[i].ten >> sn[i].date;
        arr[i] = (sn[i].date[0] * 10 + sn[i].date[1]) + (sn[i].date[3] * 10 + sn[i].date[4]) * 30 + (sn[i].date[6] * 1000 + sn[i].date[7] * 100 + sn[i].date[8] * 10 + sn[i].date[9]) * 365;
    }
    long long max = 0, min = 1e9;
    int maxPos, minPos;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            minPos = i;
        }
    }
    cout << sn[maxPos].ten << endl
         << sn[minPos].ten;
    return 0;
}