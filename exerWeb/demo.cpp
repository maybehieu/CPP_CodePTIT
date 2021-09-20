#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}