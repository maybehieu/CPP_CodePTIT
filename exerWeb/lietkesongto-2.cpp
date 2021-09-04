#include <iostream>

int mangNgto[10005] = {};
void sangEra()
{
    for (int i = 0; i <= 10005; i++)
    {
        mangNgto[i] = 1;
    }
    mangNgto[0] = 0, mangNgto[1] = 0;
    for (int i = 2; i * i <= 10005; i++)
    {
        if (mangNgto[i] == 1)
        {
            for (int j = i * i; j <= 10005; j += i)
            {
                mangNgto[j] = 0;
            }
        }
    }
}

int main()
{
    sangEra();
    int test;
    std::cin >> test;
    while (test--)
    {
        int m, n;
        std::cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (mangNgto[i])
            {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
}