/* 58.2. reverse an array using recursion.
	Write a program to reverse a given array using recursion in one variable.
	
	INPUT : arr[] = {1,2,3,4,5} , n=5
	OUTPUT : arr[] = {5,4,3,2,1}
*/
#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int i, int n) {
    if (i >= n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    rev(arr, i+1, n);
}

int main() {
    int arr[100], n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rev(arr, 0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
