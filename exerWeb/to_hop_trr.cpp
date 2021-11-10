#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[k];
    int t;
    cin >> t;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    cout << "Co n = " << n << ", "
         << "k = " << k << ", "
         << "to hop xuat phat = ";
    cout << "(";
    for (int i = 1; i <= k; i++)
    {
        if (i == k)
        {
            cout << a[i] << ")";
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
    cout << endl;
    cout << "Su dung phuong phap sinh tim " << t << " to hop ke tiep cua to hop xuat phat:";
    cout << endl;
    for (int test = 1; test <= t; test++)
    {
        cout << "(" << test << ") ";
        int i = 0;
        for (i = k; i >= 1; i--)
        {
            if (a[i] < n - k + i)
            {
                break;
            }
        }
        cout << "i = " << i << ", "
             << "a[i] = " << a[i] << " => "
             << "(";
        a[i] = a[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[i] + j - i;
        }
        for (int z = 1; z <= k; z++)
        {
            if (z == i && z == k)
            {
                cout << "_" << a[z] << ")";
            }
            else if (z == i)
            {
                cout << "_" << a[z] << ", ";
            }
            else if (z == k)
            {
                cout << a[z] << ")";
            }
            else
            {
                cout << a[z] << ", ";
            }
        }
        cout << endl;
    }
}