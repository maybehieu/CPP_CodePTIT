#include <iostream>
#include <algorithm>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
class DoanhNghiep
{
private:
public:
    string code, name;
    int amount;
    void input()
    {
        cin >> this->code;
        scanf("\n");
        getline(cin, this->name);
        cin >> this->amount;
    }
    void output()
    {
        cout << this->code << " " << this->name << " " << this->amount << endl;
    }
    DoanhNghiep(/* args */);
    ~DoanhNghiep();
};

DoanhNghiep::DoanhNghiep(/* args */)
{
}

DoanhNghiep::~DoanhNghiep()
{
}

bool can_swap(DoanhNghiep a, DoanhNghiep b)
{
    if (a.amount == b.amount)
    {
        return a.code < b.code;
    }
    return a.amount > b.amount;
}

int main()
{
    int n;
    cin >> n;
    DoanhNghiep arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].input();
    }
    std::sort(arr, arr + n, can_swap);
    for (int i = 0; i < n; i++)
    {
        arr[i].output();
    }

    return 0;
}