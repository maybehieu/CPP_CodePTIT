#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
typedef struct
{
    int stt;
    std::string name, group;
    float sales, price, profit;
} DanhSach;
void in(DanhSach &a, int i)
{
    a.stt = i + 1;
    scanf("\n");
    getline(cin, a.name);
    scanf("\n");
    getline(cin, a.group);
    cin >> a.sales >> a.price;
    a.profit = a.price - a.sales;
}
bool check(DanhSach a, DanhSach b)
{
    return a.profit > b.profit;
}
void out(DanhSach *a, int n)
{
    std::sort(a, a + n, check);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].group << " ";
        cout << std::fixed << std::setprecision(2) << a[i].profit << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    DanhSach list[n];
    for (int i = 0; i < n; i++)
    {
        in(list[i], i);
    }
    out(list, n);
    return 0;
}