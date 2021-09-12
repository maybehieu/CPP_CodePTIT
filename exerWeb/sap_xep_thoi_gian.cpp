#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
typedef struct
{
    int hours, minutes, seconds;
} Time;
void in(Time &a)
{
    cin >> a.hours >> a.minutes >> a.seconds;
}
bool check(Time a, Time b)
{
    if (a.hours < b.hours)
    {
        return true;
    }
    else if (a.hours == b.hours && a.minutes < b.minutes)
    {
        return true;
    }
    else if (a.hours == b.hours && a.minutes == b.minutes && a.seconds < b.seconds)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void out(Time a)
{
    cout << a.hours << " " << a.minutes << " " << a.seconds << endl;
}
int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    std::sort(a, a + n, check);
    for (int i = 0; i < n; i++)
    {
        out(a[i]);
    }
    return 0;
}