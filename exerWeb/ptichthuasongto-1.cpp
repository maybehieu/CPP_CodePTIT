#include <iostream>
#include <math.h>

int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n;
        std::cin >> n;
        for (int i = 2; i <= n; i++)
        {
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            if (count)
            {
                std::cout << i << " " << count << " ";
            }
        }
        std::cout << std::endl;
    }
}