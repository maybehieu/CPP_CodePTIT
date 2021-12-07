#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
#define MAX (long long)1e6

long long arr1[MAX], arr2[MAX], arr3[MAX];
int n1, n2, n3;

void input(long long *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        arr1[MAX] = {}, arr2[MAX] = {}, arr3[MAX] = {};
        cin >> n1 >> n2 >> n3;
        input(arr1, n1);
        input(arr2, n2);
        input(arr3, n3);
        int i1 = 0, i2 = 0, i3 = 0;
        int check = 0;
        while (i1 < n1 && i2 < n2 && i3 < n3)
        {
            if (arr1[i1] < arr2[i2])
            {
                i1++;
            }
            if (arr1[i1] > arr2[i2])
            {
                i2++;
            }
            if (arr3[i3] > arr2[i2])
            {
                i2++;
            }
            if (arr3[i3] < arr2[i2])
            {
                i3++;
            }
            if (arr1[i1] == arr2[i2] && arr2[i2] == arr3[i3])
            {
                cout << arr1[i1] << " ";
                i1++, i2++, i3++;
                check = 1;
            }
        }
        if (!check)
        {
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}