/*
75.1.Reverse the given array.

    Write a program to reverse a given array using two variables.

    INPUT : arr[] = {1,2,3,4,5}, n = 5
    OUTPUT : arr[] = {5,4,3,2,1}
*/
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
	int temp,i,j;
	i=0,j=n-1;
	while(i<=j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
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