#include <iostream>
#include <string>
#include <stack>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string s;
        std::stack<int> mystack;
        cin >> s;
        int i, j = 0;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == 'D')
            {
                if (i == 0 || s[i - 1] == 'I')
                {
                    mystack.push(++j);
                }
                mystack.push(++j);
            }
            else
            {
                while (!mystack.empty())
                {
                    cout << mystack.top();
                    mystack.pop();
                }
                if (i == 0)
                {
                    cout << ++j;
                }
                if (s[i + 1] != 'D')
                {
                    cout << ++j;
                }
            }
        }
        while (!mystack.empty())
        {
            cout << mystack.top();
            mystack.pop();
        }
        cout << endl;
    }
    return 0;
}