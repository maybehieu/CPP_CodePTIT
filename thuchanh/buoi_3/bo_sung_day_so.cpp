#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    int arr[n], danhdau[300] = {}, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        danhdau[arr[i]]++;
        max = std::max(arr[i], max);
    }
    int check = 0;
    for (int i = 1; i <= max; i++)
    {
        if (!danhdau[i])
        {
            cout << i << endl;
            check = 1;
        }
    }
    if (!check)
    {
        cout << "Excellent!";
    }

    return 0;
}