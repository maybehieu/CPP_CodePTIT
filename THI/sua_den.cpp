#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, k, b, temp, MIN = 0;
    cin >> n >> k >> b;
    int danhdau[100005] = {};
    // std::fill_n(danhdau, 100000, 1);
    for (int i = 0; i < b; i++)
    {
        cin >> temp;
        danhdau[temp] = 1;
    }
    temp = 0;
    for (int i = 1; i <= k; i++)
    {
        temp += danhdau[i];
    }
    MIN = temp;
    for (int i = 2; i < n - k + 1; i++)
    {
        temp = temp - danhdau[i - 1] + danhdau[i + k - 1];
        MIN = std::min(temp, MIN);
    }
    cout << MIN;

    return 0;
}