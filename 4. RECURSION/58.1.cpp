/* 58.1. reverse an array using recursion.
	Write a program to reverse a given array using recursion in two variables.
	
	INPUT : arr[] = {1,2,3,4,5} , n=5
	OUTPUT : arr[] = {5,4,3,2,1}
*/
#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int l, int r) {
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    rev(arr, l + 1, r - 1);
}

int main() {
    int arr[100], n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rev(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
