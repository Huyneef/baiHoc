#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
private:
    float Tu, Mau;

public:
    friend istream &operator>>(istream &in, PhanSo &x)
    {
        cout << "Nhap tu: ";
        in >> x.Tu ;
        cout << "Nhap mau: ";
        in >> x.Mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo y)
    {
        out << y.Tu << "/" << y.Mau;
        return out;
    }
    void rutgon(PhanSo &x);
    float getTu();
    float getMau();
};
float PhanSo::getTu()
{
    return Tu;
}
float PhanSo::getMau()
{
    return Mau;
}
int uocChung(int a, int b)
{
    if (b == 0)
        return a;
    else
        return uocChung(b, a % b);
}
void PhanSo::rutgon(PhanSo &x)
{
    if (x.Tu > 0 && x.Mau < 0)
    {
        x.Tu = -x.Tu;
        x.Mau = -x.Mau;
    }
    int rg = uocChung(x.Tu, x.Mau);
    x.Tu = x.Tu / rg;
    x.Mau = x.Mau / rg;
}
int main()
{
    PhanSo x, y;
    cin >> x >> y;
    if (x.getMau() != 0 && y.getMau() != 0)
    {
        x.rutgon(x);
        y.rutgon(y);
        if ((x.getTu() / x.getMau()) > (y.getTu() / y.getMau()))
        {
            cout << x << " la phan so lon nhat";
        }
        else if ((x.getTu() / x.getMau()) < (y.getTu() / y.getMau()))
        {
            cout << y << " la phan so lon nhat";
        }
        else
            cout << "Hai phan so bang nhau !!";
    }
}