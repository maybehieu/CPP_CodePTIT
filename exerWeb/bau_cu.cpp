#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int m, n;
    cin >> n >> m;
    int danhdau[m + 1] = {}, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        danhdau[temp]++;
    }
    int maxTemp = *std::max_element(danhdau, danhdau + m + 1);
    int max = 0, maxPos;
    for (int i = 1; i < m + 1; i++)
    {
        if (danhdau[i] > max && danhdau[i] != maxTemp)
        {
            max = danhdau[i];
        }
    }
    if (!max)
    {
        cout << "NONE";
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if (danhdau[i] == max)
            {
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}