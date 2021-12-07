#include <iostream>

using namespace std;

int n, m, a[105][105];
int row[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int col[] = {-1, -1, -1, 0, 1, 1, 1, 0};
bool checked[100][100];
void init()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            checked[i][j] = false;
        }
    }
}
bool check(int i, int j)
{
    return (i >= 0 && i <= n && j >= 0 && j <= m && a[i][j] == 1 && !checked[i][j]) ? true : false;
}
void dfs(int i, int j)
{
    checked[i][j] = true;
    for (int k = 0; k < 8; k++)
    {
        if (check(i + col[k], j + row[k]))
        {
            dfs(i + col[k], j + row[k]);
        }
    }
}
void solve()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1 && !checked[i][j])
            {
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}