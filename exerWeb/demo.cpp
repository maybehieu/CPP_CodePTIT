#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        vector<int> ans;
        long long m, n = 0;
        cin >> a >> m;
        for (int i = 0; i < a.size(); i++)
        {
            int k = a[i] - '0';
            n = (n * 10) % m + k;
            n %= m;
            ans.push_back(k);
        }
        cout << n % m << endl;
    }
}