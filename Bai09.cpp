#include <bits/stdc++.h>
#include <iomanip>
using namespace std; 
#define pi M_PI
class hinhTron {
    private:
    float Oa, Ob;
    public:
    double r;
    friend istream& operator >> (istream& in, hinhTron &x) {
        cout << "Nhap x: ";
        in >> x.Oa;
        cout << "Nhap y: ";
        in >> x.Ob;
        cout << "Nhap ban kinh r: ";
        in >> x.r;
        return in;
    }
    float getOa() {
        return Oa;
    }
    float getOb() {
        return Ob;
    }
    double getR() {
        return r;
    }
};
int main() {
    hinhTron c;
    cin >> c;
    cout << "Duong tron C co tam I(" << c.getOa() << "," << c.getOb() <<"), ban kinh r = " << c.getR() << endl;
    cout << "Dien tich duong tron C: " << fixed <<  setprecision(3) << pi*c.getR()*c.getR() << endl;
    cout << "Chu vi duong tron C: " << fixed <<  setprecision(3) << 2*pi*c.getR();
}