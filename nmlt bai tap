# baiHoc
một số bài tập đã làm C++


#1 vẽ hình vuông
#include <bits/stdc++.h>
using namespace std ;
void nhap( int& x, int& y) {
    cout << "nhap gia tri x,y: ";
    cin >> x >> y;
}
void veHCNrong(int x, int y ) {
    for (size_t i = 0 ; i < x ; i++) {
        for ( size_t j = 1 ; j < y ; j++) {
            if ( i == 0 || i == x - 1 || j == 1 || j == y-1) {
                cout << " * ";
        }   else {
            cout << "   " ;
        }
    } cout << endl;
}
}
int main () {
int x,y;
nhap(x,y);
veHCNrong(x,y);
    return 0;
}


#2 viết có dấu
#include <iostream>
#include <fcntl.h> //_O_WTEXT
#include <io.h>    //_setmode()
#include <string>
using namespace std;
int main()
{
    _setmode(_fileno(stdout), _O_WTEXT); //needed for output
    _setmode(_fileno(stdin), _O_WTEXT); //needed for input

    wcout << L"Nhập tên của bạn: ";
    wstring name;
    getline(std::wcin, name);
    wcout << L"Xin chào, " << name << L"\n";
    return 0;
}
    
#3 nhận định ngày tháng năm    
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int d,m,y;
    cin >> d >> m >> y;
    if (y>0) {
       if (m > 0 && m <13 ) {
           if (d > 0 && d <= 31) {
               if (y % 4 == 0 && y % 100 || y % 400 == 0) {
                   if (m == 2) {
                       if (d > 0 && d <= 29) {
                           cout << d << "/" << m << "/" << y << " la ngay hop le.";
                       }
                       else cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                   }
                   else if (m == 4 || m == 6 || m == 9 || m == 11) {
                       if (d > 0 && d <= 30) {
                           cout << d << "/" << m << "/" << y << " la ngay hop le.";
                       } else cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                   }
                   else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                       if (d > 0 && d <= 31) {
                           cout << d << "/" << m << "/" << y << " la ngay hop le.";
                       } else cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                   }

               }
                  else {
                       if (m == 2 ) {
                           if ( d > 0 && d <=28 ) {
                           cout << d << "/" << m << "/" << y << " la ngay hop le."; }
                           else cout <<  d << "/" << m << "/" << y << " la ngay khong hop le.";
                       }
                       else if (m == 4 || m == 6 || m == 9 || m == 11) {
                           if (d > 0 && d <= 30) {
                               cout << d << "/" << m << "/" << y << " la ngay hop le.";}
                           else cout <<  d << "/" << m << "/" << y << " la ngay khong hop le.";
                       }
                       else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m ==10 || m == 12) {
                           if (d > 0 && d <= 31) {
                               cout << d << "/" << m << "/" << y << " la ngay hop le.";}
                           else cout <<  d << "/" << m << "/" << y << " la ngay khong hop le.";
                       }

                  }
                                                          
                                                                      
#4 Cặp số sinh đôi
 #include <iostream>
using namespace std;
int main () {
    int a, b , c = 0, d = 0, e = 0 , g = 0;
    cin >> a;
    for (int i = 3; i <= a; i++)
    {   int  b = 0;
        for (int j = 1; j <= i ; j++) {
            if (i % j == 0) b++;
            if (j == i) {
                if (b == 2) {

                    c = i;
                    d = i + 2;

                    int e = 0;
                    for (int k = 1; k <= d; k++) {

                        if (d % k == 0) e++;
                        if (k == d) {

                            if (e == 2 && d <= a) {

                                cout << c << ", " << d << endl;
                                g++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "Tong: " << g << " cap so sinh doi < " << a;
    return 0;
}                                                                    
