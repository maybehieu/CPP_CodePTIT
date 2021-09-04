#include <iostream>

int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n, k, count = 0, check = 0;
        std::cin >> n >> k;
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                count++;
                if (count == k)
                {
                    std::cout << i << std::endl;
                    check = 1;
                    break;
                }
                n /= i;
            }
        }
        if (check == 0)
        {
            std::cout << "-1" << std::endl;
        }
    }
}