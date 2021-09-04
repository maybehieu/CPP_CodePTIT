#include <iostream>
// #include <algorithm>
long long arr[10000100], arr2[10000100], danhdau[10000100];

int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n, temp;
        std::cin >> n;
        std::fill_n(danhdau, n, 0);
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
            if (arr[i] > 10000000)
            {
                continue;
            }
            danhdau[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (danhdau[i] > 0)
            {
                arr2[i] = i;
            }
            else
            {
                arr2[i] = -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}