#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, l1 = 0;
        cin >> n;
        std::string b = "-1";
        for (int i = 0; i < n; i++)
        {
            std::string a;
            cin >> a;
            for (int j = 0; j < a.size(); j++)
            {
                int z = 0;
                for (int k = 0; k < b.size(); k++)
                {
                    if (a[j] != b[k])
                    {
                        z++;
                    }
                }
                if (z == b.size())
                    b += a[j];
            }
        }
        for (int i = 0; i < b.size() - 1; i++)
        {
            for (int j = i + 1; j < b.size(); j++)
            {
                if (b[i] > b[j])
                {
                    char g = b[i];
                    b[i] = b[j];
                    b[j] = g;
                }
            }
        }
        for (int i = 1; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}