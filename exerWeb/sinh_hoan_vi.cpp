#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int n, a[1005], check[1005] = {0};
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
            if (i == n)
                in();
            else
                Try(i + 1);
            check[j] = 0;
        }
    }
}