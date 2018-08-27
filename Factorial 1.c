/*
Given an integer, the task is to find factorial of the number.
 
Input:
The first line of input contains an integer T denoting the number of test cases.  
The first line of each test case is N,the number whose factorial is to be found
 
Output:
Print the factorial of the number in separate line.
 
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
 
Example:
Input
3
5
10
2
 
Output
120
3628800
2
*/

#include <bits/stdc++.h>
using namespace std;

#define max_size 10000

int product(int i , int r[] , int r_l) {
    int c = 0;
    for(int j = 0 ; j < r_l ; j++) {
        int p = (r[j] * i) + c;
        r[j] = p % 10;
        c = p / 10;
    }
    while(c != 0) {
        r[r_l] = c % 10;
        c = c / 10;
        r_l++;
    }
    return r_l;
}

void factorial(int n) {
    int r[max_size];
    r[0] = 1;
    int r_l = 1;
    for(int i = 2 ; i <= n ; i++) {
        r_l = product(i , r , r_l);
    }
    for(int k = r_l-1 ; k >= 0 ; k--) {
        cout << r[k];
    }
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0 ; i < t ; i++) {
	    int n;
	    cin >> n;
	    factorial(n);
	}
	return 0;
}
