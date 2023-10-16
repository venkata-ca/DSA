/*
73. Check if an array is sorted or not.

    Write a program to check whether the given array is sorted or not.

    INPUT : arr[] = {5,4,3,2,1}, n = 5
    OUTPUT : NO
*/
#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
            return false;

    }
    return true;
}
int main()
{
	int n,arr[100];
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
    bool x = check(arr,n);
    if(x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
return 0;
}