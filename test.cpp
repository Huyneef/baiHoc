#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <math.h>
 using namespace std;
    struct soPhuc {
        int a, b;
        soPhuc operator + (const soPhuc other) {
            soPhuc t;
            t.a = a + other.a;
            t.b = b + other.b;
            return t;
        }
        friend istream& operator >> (istream& in, soPhuc &x) {
            in >> x.a >> x.b;
            return in;
        }
        friend ostream& operator << (ostream& out, soPhuc y) {
            out << y.a << " " << y.b;
            return out;
        }
    };
    int main () {
        soPhuc a,b;
        cin >> a >> b;
        soPhuc c = a + b;
        cout << c;
    }