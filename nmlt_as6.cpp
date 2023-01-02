#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

//1
/*
int Nhapmang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a[n];
}
bool isBenford(int a[], int n) {
    int one = 0, four = 0, s ;
    for (int i = 0; i < 10; i++) {
        while(a[i]>10) {
            a[i]/=10;
        }
        if(a[i] == 10 || a[i] == 1) {one++;}
        if(a[i] == 4) {four++;}
    }
    if(one == 3 && four == 1) return true;
    else return false;
}
    
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
*/

//2
// void NhapmangSNT(int a[], int &n);
// int SoPhanTuChuaY(int a[], int n,int y);
// bool primeNumber(int n) {
//     if (n < 2) return 0;
//     for(int i = 2; i <= sqrt(n); i++) {
//         if(n % i == 0) return 0;
//     }
//     return 1;
// }
// void NhapmangSNT(int a[], int &n) {
//     int dem = 0;
//     cin >> n;
//     for(int j = 2; dem < n; j++) {
//         if(primeNumber(j)) { 
//             a[dem] = j;
//             ++dem;
//     }
//     }
// }

// int SoPhanTuChuaY(int a[], int n,int y) {
//     int s, count = 0 ;
//     for(int i = 0; i < n; i++) {
//         int x = a[i];
//     for (;x!=0;) {
//         s = x%10;
//         if(s == y) {count++; break;}
//         x/=10;
//     }
//     }
//     return count;
// }

// int main()
// {
// 	int a[MAX], n, y;
// 	cin >>y;
// 	NhapmangSNT(a,n);
// 	cout << SoPhanTuChuaY(a, n, y) << endl;;
// 	return 0;
// }


//3 
/*
int main () {
    int n ; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < n; i+=2) {
        cout << a[i] << " "; 
    }
    return 0;
}
*/

//4 
/*
bool primeNumber(int n) {
    if (n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main () {
    int n, count = 0 ; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(primeNumber(a[i])) {
            cout << a[i] << " " ;
            count++;
        }
    }
    if(count == 0) cout << "0";
    return 0;
}
*/

//5
/*
int main () {
    int n; cin >> n;
    int a[n], b[n+1];
    for (int &x : a) {
        cin >> x;
    }
    for(int i = 0; i < n; i++) {b[i] = a[i];}
    int x, k; cin >> x >> k;
    if(k >= 0 && k <=6) {
        for(int i = n; i >= k; i--) {
            b[i] = b[i-1];
        }
        b[k] = x;
    }
    for(int y : b) {cout << y << " " ;}
}
*/

//6 
/*
int main () {
    int n; cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    int max = a[0];
    for(int i = 0; i < n ; i++) {
        if(a[i] > max) max = a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == max) count++;
    }
    cout << max << endl << count;

}
*/

//7 
/*
int main () {
    int n; cin >> n;
    if(n >=0) {
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    int max1;
    int  max2 = -1;
    max1 = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1) max2 = a[i];
    }
        if(max2 == -1) cout << "0";
    else cout << max2;
    }
    return 0;
}
*/

//8
/*
int main () {
    int n; cin >> n;
    if(n >=0) {
    int a[n];
    map<int,bool>mp;
    for(int &x : a) {
        cin >> x;
    }
        int x; cin >> x;    
           mp[x] = 1;

    for(int i = 0; i < n ; i++) {
        if(mp[a[i]]) continue;
        else cout << a[i] << " ";
    }
    }
    
}
*/

//9 
/*
int main () {
    int n; cin >> n;
    if(n > 0) {
        int a[n];
        for(int &x : a) {
            cin >> x;
        }
        int p, k;
        cin >> p >> k; 

        if(p >= 0 && p < n && k <= n-p) {
                int c = 0;
                for(int i = p; i < n; i++) {
                    for(int j = i; j < n; j++) {
                    a[j] = a[j+1];
                    }
                    n--; 
                    c++;
                    i--;
                    if(c == k) {break;}
                    }
                }
                if(n != 0) {
                    for(int i = 0; i < n; i++) {
                    cout << a[i] << " ";
            }

        }
    }
}
*/

//10
int main() {
    int m, n;
    cin >> m;
    int a[m]; 
    for(int &x : a) {cin >> x;}
    cin >> n;
    int b[n];
    for(int &x : b) {cin >> x;}
    int c[m+n];
    for(int i = 0; i < m; i++) {c[i] = a[i];}
    for(int j = m; j < m+n; j++) {
        c[j] = b[j-m];
    }
    sort(c,c+m+n);
    for(int y : c) {cout << y << " ";}
}