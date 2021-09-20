#include <iostream>

int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n, k;
        std::cin >> n;
        std::cin >> k;
        int arr[n] = {};
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        for (int i = k; i < n; i++)
        {
            std::cout << arr[i] << " ";
        }
        for (int i = 0; i < k; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}