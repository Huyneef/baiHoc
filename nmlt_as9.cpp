//4
/*
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char *s);
int main()
{
	char *s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX-1);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

void Chuanhoa(char *s) {
    int n = strlen(s) ;
    for(int i = 0 ; i < n; i++) {
        if(i == 0 && s[0] == ' ')
        {
            for(int i = 0 ; i < n-1; i++) {
            s[i] = s[i+1];
        }   s[n-1] = '\0';
        i--; n--;
        }
        if(i == n-1 && s[n-1] == ' ') {s[n-1] = '\0'; n--;}
        if(i==0) s[i] = toupper(s[i]);
        else if( s[i] >= 'a' && s[i] <= 'z' && s[i-1] == ' ') s[i] = toupper(s[i]);
        else if( s[i] >= 'A' && s[i] <= 'Z' && s[i-1] == ' ') continue;
        else s[i] = tolower(s[i]);
    }
}
*/

//5
/*
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

int main()
{
	char *s1 = NULL, *s2 = NULL;
	s1 = new char[MAX];
	s2 = new char[MAX];
	//gets(s1);
	//gets(s2);
	cin.getline(s1, MAX-1);
	cin.getline(s2, MAX-1);	
	char *s = myStrcat(s1, s2);
	puts(s);
	return 0;
}

char* myStrcat(char *s1, char *s2) {
    int c1 = myStrlen(s1);
	int c2 = myStrlen(s2);
	char *s = new char [c1+c2+1];
	for(int i = 0; i < c1+c2+1; i++) {
		if(i < c1) { s[i] = *(s1+i);}
		if(i >= c1 && i < (c1+c2+1)) {s[i] = *(s2+i-c1);}
		if(i == (c1+c2+1)) s[i] = '\0';
	}
	return s;
}
int myStrlen(char *s) {
	int c = 0;
	for(int i = 0; i < MAX; i++) {
		if(s[i] == '\0') break;
		c++;
	}
	return c;
}
*/

//8 
/*
#include <bits/stdc++.h>
using namespace std;
int main () {
	long m,n ;
	cin >> m >> n;
	double a[m][n];
	for(int i = 0; i < m; i++) {
		for( int j = 0; j < n; j++) { 
			cin >> a[i][j];
			}
	}
	for(int j = 0; j < n; j++) {
		double max = a[0][j];
		for(int i = 0; i < m; i++) {
			if(max < a[i][j]) max = a[i][j];
		}
		cout << "Gia tri lon nhat tren cot " << j << " la: " << max << endl;
	}

}
*/

//6
/*
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 255
typedef char* charr;
void chenChuoi(charr s1, charr s2, charr s3,int k) {
	int n1 = strlen(s1), n2 = strlen(s2);
    for(int i = 0; i < k; i++) {
		s3[i] = s1[i];
	}
	for(int i = 0; i < n2; i++) {
		s3[i+k] = s2[i];
	}
	for(int i = k; i < n1; i++) {
		s3[i+n2] = s1[i];
	}
	s3[n1+n2] = '\0';
	puts(s3);
}
int main () {
	charr s1 = NULL, s2 = NULL, s3 = NULL;
	s1 = new char [MAX];
	s2 = new char [MAX];
	s3 = new char [MAX];
	cin.getline(s1,MAX-1);
	cin.getline(s2,MAX-1);
	int k;
	cin >> k;
	if(k < 0 || k > strlen(s1)) {
		cout << "Vi tri " << k << " khong thoa dieu kien.";
	}
	else {
		chenChuoi(s1,s2,s3,k);
	}
}
*/

//7
#include <bits/stdc++.h>
using namespace std;
int main () {
	long m,n ;
	cin >> m >> n;
	double a[m][n];
	for(int i = 0; i < m; i++) {
		for( int j = 0; j < n; j++) { 
			cin >> a[i][j];
			}
	}
	for(int i = 0; i < m; i++) {
		for(int j= 0; j < n; j++) {
			cout << a[i][j] << " " ;
		}
		cout << endl;
	}
}
