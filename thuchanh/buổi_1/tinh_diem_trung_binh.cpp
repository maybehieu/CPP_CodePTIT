#include <iostream>
#include <algorithm>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double sum = 0;
    int dem = 0;
    std::sort(arr, arr + n);
    double min = arr[n - 1], max = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] != max && arr[i] != min)
        {
            sum += arr[i];
            dem++;
        }
    }
    cout << std::fixed << std::setprecision(2) << sum / (double)dem;

    return 0;
}