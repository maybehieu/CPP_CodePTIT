#include <stdio.h>
int main()
{
    long long a[100005], b[100005], n, m;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%lld", &a[j]);
            b[j] = a[j];
        }
        long long h = 0;
        for (int j = 0; j < m; j++)
        {
            long long g = 0;
            for (int u = 0; u < m; u++)
            {
                if (b[u] == b[j] && u != j || b[u] < 0)
                {
                    h++;
                }
                else if (j == b[u])
                {
                    a[j] = b[u];
                }
                else
                {
                    g++;
                }
            }
            if (g == m)
            {
                a[j] = 0;
            }
        }
        if (h > 0 || m <= 0)
        {
            printf("KH0NG'");
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                printf("%lld ", a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}