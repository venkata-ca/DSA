/*
75.2.Reverse the given array.

    Write a program to reverse a given array using one variable

    INPUT : arr[] = {1,2,3,4,5}, n = 5
    OUTPUT : arr[] = {5,4,3,2,1}
*/
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
	int temp,i=0;
	while(i<=n/2)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		i++;
	}
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	reverse(arr,n);
return 0;
}