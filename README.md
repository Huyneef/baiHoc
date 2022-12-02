# baiHoc
một số bài tập đã làm
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
