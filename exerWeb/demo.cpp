#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> MAP;
    map<string, int>::iterator item;
    while (n--)
    {
        string input;
        getline(cin, input);
        stringstream ss;
        ss << input;
        vector<string> list;
        string token;
        while (ss >> token)
        {
            for (int i = 0; i < token.size(); i++)
            {
                token[i] = towlower(token[i]);
            }
            list.push_back(token);
        }
        string output;
        output += list[list.size() - 1];
        for (int i = 0; i <= list.size() - 2; i++)
        {
            output += list[i][0];
        }
        item = MAP.find(output);
        if (item != MAP.end())
        {
            cout << output << ++MAP[output] << "@ptit.edu.vn";
        }
        else
        {
            MAP[output] = 1;
            cout << output << "@ptit.edu.vn";
        }
        cout << endl;
    }
}