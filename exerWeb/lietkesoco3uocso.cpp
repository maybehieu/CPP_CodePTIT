#include <iostream>
#include <math.h>
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
        int n;
        std::cin >> n;
        for (int i = 0; i <= sqrt(n); i++)
        {
            if (mangNgto[i] && i * i <= n)
            {
                std::cout << i * i << " ";
            }
        }
        std::cout << std::endl;
    }
}