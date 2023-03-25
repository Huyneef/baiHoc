#include <bits/stdc++.h>
using namespace std; 
class soPhuc {
    private:
    int Thuc, Ao; // Thuc + bi
    public:
    friend istream& operator >> (istream& in, soPhuc & x) {
        cout << "Nhap phan thuc: " ;
        in >> x.Thuc;
        cout << "Nhap phan ao: ";
        in >> x.Ao;
        return in;
    }
    friend ostream& operator << (ostream& out, soPhuc y) {
        out << "("  << y.Thuc << " + " << y.Ao << "i)";
        return out;
    }
    soPhuc operator + (const soPhuc other) {
        soPhuc t;
        t.Thuc = Thuc + other.Thuc;
        t.Ao = Ao + other.Ao;
        return t;
    }
    soPhuc operator - (const soPhuc other) {
        soPhuc h;
        h.Thuc = Thuc - other.Thuc;
        h.Ao = Ao - other.Ao;
        return h;
    }
    soPhuc tich(soPhuc x, soPhuc y);
};
soPhuc soPhuc::tich(soPhuc x, soPhuc y) {
    soPhuc ti;
    ti.Thuc = x.Thuc*y.Thuc - x.Ao*y.Ao;
    ti.Ao = x.Thuc*y.Ao + y.Thuc*x.Ao;
    return ti;
}
int main () {
    soPhuc x, y;
    soPhuc ti;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    cout << x << " x " << y << " = " << ti.tich(x,y);
}