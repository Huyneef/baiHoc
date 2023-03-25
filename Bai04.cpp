#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
private:
    double Tu, Mau;

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
    PhanSo tong(PhanSo x, PhanSo y);
    PhanSo hieu(PhanSo x, PhanSo y);
    PhanSo tich(PhanSo x, PhanSo y);
    PhanSo thuong(PhanSo x, PhanSo y);
    float getMau();
};
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
PhanSo PhanSo::tong(PhanSo x, PhanSo y)
{
    PhanSo t;
    t.Tu = x.Tu * y.Mau + x.Mau * y.Tu;
    t.Mau = x.Mau * y.Mau;
    t.rutgon(t);
    return t;
}
PhanSo PhanSo::hieu(PhanSo x, PhanSo y)
{
    PhanSo h;
    h.Tu = x.Tu * y.Mau - x.Mau * y.Tu;
    h.Mau = x.Mau * y.Mau;
    h.rutgon(h);
    return h;
}
PhanSo PhanSo::tich(PhanSo x, PhanSo y)
{
    PhanSo ti;
    ti.Tu = x.Tu * y.Tu;
    ti.Mau = x.Mau * y.Mau;
    ti.rutgon(ti);
    return ti;
}
PhanSo PhanSo::thuong(PhanSo x, PhanSo y)
{
    PhanSo th;
    th.Tu = x.Tu * y.Mau;
    th.Mau = x.Mau * y.Tu;
    th.rutgon(th);
    return th;
}
int main()
{
    PhanSo x, y;
    cin >> x >> y;
    PhanSo t,h,ti,th;
    if (x.getMau() != 0 && y.getMau() != 0)
    {
        cout << x << " + " << y << " = " << t.tong(x, y) << endl;
        cout << x << " - " << y << " = " << h.hieu(x, y) << endl;
        cout << x << " x " << y << " = " << ti.tich(x, y) << endl;
        cout << x << " : " << y << " = " << th.thuong(x, y) << endl;
    }
}