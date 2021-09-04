#include <iostream>

using std::cin;
using std::cout;
using std::endl;
bool fibo[1005];

void sangFibo()
{
    long long a = 0, b = 1, c = 0;
    fibo[0] = true, fibo[1] = true;
    while (c < 1005)
    {
        c = a + b;
        fibo[c] = true;
        a = b;
        b = c;
    }
}

int main()
{
    sangFibo();
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (fibo[arr[i]])
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}