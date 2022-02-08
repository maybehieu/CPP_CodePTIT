#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class KhachHang
{
private:
    /* data */
public:
    string maKH = "KH0", name, sex, dOb, address;
    friend class HoaDon;
    KhachHang(/* args */);
    ~KhachHang();
};

KhachHang::KhachHang(/* args */)
{
}

KhachHang::~KhachHang()
{
}

class MatHang
{
private:
    /* data */
public:
    string maMH = "MH0", name, measureCount, buy, sell;
    friend class HoaDon;
    MatHang(/* args */);
    ~MatHang();
};

MatHang::MatHang(/* args */)
{
}

MatHang::~MatHang()
{
}

class HoaDon
{
private:
    /* data */
public:
    string maHD, maKH, maMH, volume;
    HoaDon(/* args */);
    ~HoaDon();
};

HoaDon::HoaDon(/* args */)
{
}

HoaDon::~HoaDon()
{
}

friend std::istream int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}