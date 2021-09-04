#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C[10] = {0};
    int N;
    cin >> N;
    while (N--)
    {
        int a;
        char b;
        cin >> a;
        while (a--)
        {
            cin >> b;
            if (b == '1')
                continue;
            if (b == '2' || b == '3' || b == '5' || b == '7')
                C[b - 48]++;
            if (b == '4')
            {
                C[2] += 2;
                C[3]++;
            }
            if (b == '6')
            {
                C[5]++;
                C[3]++;
            }
            if (b == '8')
            {
                C[7]++;
                C[2] += 3;
            }
            if (b == '9')
            {
                C[7]++;
                C[3] += 2;
                C[2]++;
            }
        }
        for (int i = 9; i > 1; i--)
        {
            while (C[i] > 0)
            {
                cout << i;
                C[i]--;
            }
        }
        cout << endl;
    }
} // Nguyễn Thanh Châu