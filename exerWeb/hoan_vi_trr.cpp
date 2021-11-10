#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "Co n = " << n << ", hoan vi xuat phat = (";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
        if (i != n)
        {
            cout << ", ";
        }
    }
    cout << ")" << endl;
    cout << "Su dung phuong phap tim 5 hoan vi ke tiep cua hoan vi xuat phat :" << endl;
    for (int k = 1; k <= t; k++)
    {
        cout << k << " : ";
        int i = 0;
        for (i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i + 1])
                break;
        }
        cout << "i = " << i << ", "
             << "a[i] = " << a[i] << ", ";
        int min1 = 1e9;
        int j;
        int vitri;
        for (j = i + 1; j <= n; j++)
        {
            if (a[j] > a[i])
            {
                if (min1 > a[j])
                    min1 = a[j];
                vitri = j;
            }
        }
        cout << "k = " << vitri << ", "
             << "ak = " << min1 << "\t"
             << "=>"
             << "\t";
        cout << "(";
        swap(a[i], a[vitri]);
        for (int z = 1; z <= n; z++)
        {
            if (z == i || z == vitri)
            {
                cout << "_" << a[z] << ", ";
            }
            else if (z == n)
            {
                cout << a[z] << ")";
            }
            else
            {
                cout << a[z] << ", ";
            }
        }
        cout << "\t"
             << "=>"
             << "\t";
        cout << "(";
        sort(a + i + 1, a + n + 1);
        for (int h = 1; h <= n; h++)
        {
            if (h == n)
            {
                cout << a[h] << ")";
            }
            else
            {
                cout << a[h] << ", ";
            }
        }
        cout << endl;
    }
}