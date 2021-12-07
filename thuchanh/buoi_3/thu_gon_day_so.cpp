#include <iostream>
#include <stack>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    int arr[100005] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    std::stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty() || (arr[i] + s.top()) % 2)
        {
            s.push(arr[i]);
        }
        else
        {
            s.pop();
        }
    }
    cout << s.size();
    return 0;
}