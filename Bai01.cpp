#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
private:
    int Tu, Mau;

public:
    void nhap();
    void xuat();
    PhanSo rutgon(PhanSo &x);
};
void PhanSo::nhap()
{
    cout << "Nhap tu: "; cin >> Tu;
    cout << "Nhap mau:"; cin >> Mau;
}
void PhanSo::xuat()
{
    if (Mau != 0)
    {
        if (Tu == 0)
            cout << "Phan so " << Tu << "/" << Mau << " bang 0";
        else if (Tu < 0 && Mau > 0 || Tu > 0 && Mau < 0)
        {
            
            cout << "Phan so ";
            cout << Tu << "/" << Mau;
            cout << " la so am";
        }
        else
        {
            
            cout << "Phan so ";
            cout << Tu << "/" << Mau;
            cout << " la so duong";
        }
    }
    else
        cout << "Error !!";
}
int uocChung(int a, int b)
{
    if (b == 0)
        return a;
    else
        return uocChung(b, a % b);
}
PhanSo PhanSo::rutgon(PhanSo &x)
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
    PhanSo x;
    x.nhap();
    x.rutgon(x);
    x.xuat();
    
    
}
