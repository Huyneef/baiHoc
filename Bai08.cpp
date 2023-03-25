#include <bits/stdc++.h>
using namespace std; 
class toaDo {
    private:
    float a, b;
    public:
    friend istream& operator >> (istream& in, toaDo &x) {
        cout << "Nhap x: ";
        in >> x.a;
        cout << "Nhap y: ";
        in >> x.b;
        return in;
    }
    friend ostream& operator << (ostream& out, toaDo y) {
        out << "(" << y.a << "," << y.b << ")" ;
    }
    float khoangCach(toaDo, toaDo);
    float geta(){
        return a;
    }
    float getb() {
        return b;
    }

};
float toaDo::khoangCach(toaDo A, toaDo B) {
    return sqrt(pow((A.a - B.a),2) + pow((A.b - B.b) , 2) );
}
int main () {
    toaDo A,B,C;
    cin >> A >> B >> C;
    float AB = A.khoangCach(A,B), BC = B.khoangCach(B,C) , AC = C.khoangCach(A,C) ;
    float p;
    p = (AC + AB + BC)/2;
    if(AB + BC > AC && AB + AC > BC && AC + BC > AB) {
        cout << "Ba diem A" << A << ", " << "B" << B << ", " << "C" << C << " tao thanh tam giac." << endl;
        cout << "Chu vi tam giac ABC: " << AB + BC + AC << endl;
        cout << "Dien tich tam giac ABC: " << sqrt(p*(p-AB)*(p-AC)*(p-BC)) << endl;
        cout << "Toa do trong tam G cua tam giac ABC: (" << float((A.geta()+B.geta()+C.geta())/3) << "," << float((A.getb()+ B.getb()+C.getb())/3) << ")\n"; 
    }
}