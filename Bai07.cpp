#include <bits/stdc++.h>
using namespace std; 
class ngay{
    private:
    int d,m,y;
    public:
    int getD() {
        return this->d;
    }
    int getM() {
        return this->m;
    }
    int getY() {
        return this->y;
    }
    void nhap();
    void outputPreDay(int d, int m, int y);
};
void ngay::nhap() {
    do {
    cout << "Nhap ngay: "; cin >> d;
    cout << "Nhap thang: "; cin >> m;
    cout << "Nhap nam: "; cin >> y;
    }while(d < 1 || d > 31 || y < 0 || m < 1 || m >= 13);
}
int namNhuan(int y) {
    return (((y % 4 == 0)&&(y % 100 != 0)) || y % 400 == 0);
}
int countDays(int m, int y) {
    switch(m) {
        case 1: case 3: case 5: case 7 : case 8: case 10: case 12:
        {
            return 31;
            break;
        }
        case 4:case 6:case 9:case 11:
        {
        return 30;
        }
        case 2:{
        if(namNhuan(y)) return 29;
        else return 28;
    }
    }
}
void ngay::outputPreDay(int d, int m, int y) {
    int pd = d, pm = m, py = y;
    if(d >= 1 && d <= countDays(m,y) && m >= 1 && m < 13 && y > 0) {
        pd = d - 1;
        if(m != 1 && d == 1) {
            pm = m -1;
            pd = countDays(m-1,y);
        }
        else if(m == 1 && d == 1) {
            pd = 31;
            pm = 12;
            py = y -1;
        }
        else if(m == 3) {
            if(namNhuan(y)) {
                if(d == 1) {
                pd = 29;
                pm = m -1;
                }
            }
            else {
                if(d == 1) {
                pm = m - 1;
                pd = 28;
                }
            }
        }
    }
    cout<<"\nNgay truoc do: : " << pd << "/" << pm << "/" << py;
}
int main () {
    ngay x;
    x.nhap() ;
    int d = x.getD(), m = x.getM(), y = x.getY();
    x.outputPreDay(d,m,y);
}