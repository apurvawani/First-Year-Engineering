/*
You have been given an array A of size N . you need to sort this array non-decreasing oder 
using bubble sort. However, you do not need to print the sorted array . You just need to 
print the number of swaps required to sort this array using bubble sort

Input Format :
The first line consists of a single integer N denoting size of the array. The next line 
contains N space separated integers denoting the elements of the array.

Output Format : 
Print the required answer in a single line

Constrains : 
1 <= N <= 100
1 <= a[i] <= 100000
*/

#include <bits/stdc++.h>
using namespace std;

int bubble_Sort(int *arr , int size) {
    bool flag;
    int result = 0 , temp;
    for(int i = 0 ; i < size && flag == true ; i++) {
        flag = false;
        int j = 0;
        while(j < size-i-1) {
            if(arr[j] > arr[j+1]) {
                flag = true;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                result++;
            }
            j++;
        }
    }
    return result;
} 

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    int count = bubble_Sort(a , n);
    cout << count << endl;
    return 0;
}
