#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//2
/* 
void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int Fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return Fibo(n-1) + Fibo(n-2);
}

void Nhapmang(int a[][MAX], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = Fibo(i+j+1) ;
        }
    }
}
void Xuatmang(int a[][MAX], int n) {
    for(int i =0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
}

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);

    return 0;
}
*/

//3
/*
#define MAXR 100
#define MAXC 100
 void NhapMaTran(int a[][MAXC], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
 }
bool isMaTranDonVi(int a[][MAXC], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {if(a[i][j] != 1) 
            {return 0;}
            }
            if(i != j){if(a[i][j]) { 
                {return 0;}
            }
        }
    }
    }
    return 1;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    cout <<  boolalpha << isMaTranDonVi(a, n);
    return 0;
}
*/

//4
/*
void Nhapmang(float a[][100],float b[][100],int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j]; ;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            b[i][j] = a[j][i];
        }
    }
}
void Xuatmang(float b[][100],int m, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " " ;
        }
        cout << endl;
    }
}
int main () {
    int m, n; cin >> m >> n;
    float a[100][100], b[100][100];
    Nhapmang(a,b,m,n);
    Xuatmang(b,m,n);
    
    return 0;
}
*/

//5
/*
void iArray(float a[][100], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
void sumOfArray(float a[][100],int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    cout << sum;
}
int main () {
    int m,n; cin >> m >> n;
    float a[100][100];
    iArray(a,m,n);
    sumOfArray(a,n);
}
*/


//6
/*
void iArray(double a[][100], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
bool checkDCC(double a[][100], int n) {
    if(n == 1) return 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            else {if(a[i][j]) return 0;}
        }
    }
    return 1;
}
int main () {
    int m,n; cin >> m >> n;
    double a[100][100];
    iArray(a,m,n);
    if(checkDCC(a,n)) cout << "Yes";
    else cout << "No";
}
*/

//7 
/*
void iArray(float a[][100], int m, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
bool checkSymmetric(float a[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(a[i][j] != a[j][i]) return 0;
            }
        }
    }
    return 1;
}

int main () {
    int m, n ; cin >> m >> n;
    float a[100][100];
    iArray(a,m,n);
    if(checkSymmetric(a,n)) cout << "Yes";
    else cout << "No";
}
*/

//8
/*
void iArray(float a[][100], int m, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
bool frobenius(float a[][100], int n) {
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {if(a[i][j] != 1) return 0;}
            else if (i < j) {if(a[i][j]) return 0;}
            else {
                int l = i, r = j;
                c = 0;
                while(l <= n) {
                    if(a[l][r]) c++;
                    l++;
                    r++; 
                }
                if(c>=2) {return 0;}
            }
        }
    }
    return 1;
}
int main () {
    int m, n ; cin >> m >> n;
    float a[100][100];
    iArray(a,m,n);
    if(frobenius(a,n)) cout << "Yes";
    else cout << "No";
}
*/

//9
/*
void arrayA(float a[][100],int m,int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
void arrayB(float b[][100],int l,int k) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }
}
int main () {
    int m,n ; cin >> m >> n;
    float a[100][100];
    arrayA(a,m,n);
    int l, k; cin >> l >> k;
    float b[100][100];
    arrayB(b,m,n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout <<  a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}
*/

//10
void arrayA(float a[][100],int m,int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
void arrayB(float b[][100],int l,int k) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }
}
int main () {
    int m, n; cin >> m >> n;
    float a[100][100];
    arrayA(a,m,n);
    int l,k; cin >> l >> k;
    float b[100][100];
    arrayB(b,l,k);
    float c[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            float t = 0;
            for(int g = 0; g < n; g++) {
                t += a[i][g]*b[g][j];
            }
            c[i][j] = t;
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}