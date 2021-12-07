// #include <iostream>
// #include <string.h>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;

// bool CHECK(int a)
// {
//     if (a < 255 && a > 0)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int test;
//     cin >> test;
//     scanf("\n");
//     while (test--)
//     {
//         string ipAddr;
//         int temp = 0, check = 1, count = 0;
//         getline(cin, ipAddr);
//         for (int i = 0; i < ipAddr.length(); i++)
//         {
//             if (ipAddr[i] == '.' || ipAddr[i + 1] == '\000')
//             {
//                 if (!CHECK(temp))
//                 {
//                     // cout << "NO" << endl;
//                     check = 0;
//                     break;
//                 }
//                 else
//                 {
//                     temp = 0;
//                 }
//                 count++;
//             }
//             else if (ipAddr[i] >= '1' && ipAddr[i] <= '9')
//             {
//                 temp = temp * 10 + (ipAddr[i] - '0');
//             }
//             else
//             {
//                 // cout << "NO" << endl;
//                 check = 0;
//                 break;
//             }
//         }
//         if (check && count == 3)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <string.h>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool CHECK(string a)
{
    if (a.size() > 3)
    {
        return false;
    }
    else if (a.size() == 3 && a > "255")
    {
        return false;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ipAddr;
        cin >> ipAddr;
        int check = 1, count = 0;
        for (int i = 0; i < ipAddr.size(); i++)
        {
            if (ipAddr[i] == '.')
            {
                ipAddr[i] = ' ';
                count++;
            }
            else if (ipAddr[i] < '0' || ipAddr[i] > '9')
            {
                check = 0;
                break;
            }
        }
        if (count != 3)
        {
            check = 0;
        }
        count = 0;
        string temp;
        std::stringstream s(ipAddr);
        while (s >> temp)
        {
            if (CHECK(temp))
            {
                count++;
            }
            else
            {
                check = 0;
            }
        }
        if (count != 4)
        {
            check = 0;
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}