#include <bits/stdc++.h>
using namespace std; 
class toaDo {
    private:
    float a, b;
    public:
    void nhap();
    void xuat(toaDo A, toaDo B);
    float khoangCach(toaDo A, toaDo B);
    
};
void toaDo::nhap() {
    cout << "Nhap x: "; cin >> a;
    cout << "Nhap y: "; cin >> b;
}
void toaDo::xuat(toaDo A, toaDo B) {
cout << "Khoang cach giua 2 diem A(" << A.a << ","  << A.b << "), B(" << B.a << "," << B.b << ") : " 
    << khoangCach(A,B) ;
}
float toaDo::khoangCach(toaDo A, toaDo B) {
    return sqrt(pow((A.a - B.a),2) + pow((A.b - B.b) , 2) );
}
int main () {
    toaDo A,B ;
    A.nhap();
    B.nhap();
    A.xuat(A,B);
}