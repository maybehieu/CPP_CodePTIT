#include <iostream>
#include <map>
#include <set>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[100][100], dem = 0;
        std::map<int, int> danhdau;
        for (int i = 0; i < n; i++)
        {
            std::set<int> temp;
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                temp.insert(arr[i][j]);
            }
            for (auto &&i : temp)
            {
                danhdau[i]++;
                if (danhdau[i] == n)
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }

    return 0;
}