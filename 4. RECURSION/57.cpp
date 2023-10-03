/* 57.Check if an array is sorted using recursion.
	Write a program to check whether the given array is sorted or not using recursion.
	
	INPUT : arr[] = {1,2,3,4,5,6} , n=6
	OUTPUT : SORTED
	
	INPUT : arr[] = {9,1,25,6,7,10} , n=6
	OUTPUT : UNSORTED
*/
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
	if(n==1)
	return true;
	return (arr[0]<arr[1]&&sorted(arr+1,n-1));
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool x=sorted(arr,n);
	if(x)
	cout<<"SORTED"<<endl;
	else
	cout<<"NOT SORTED"<<endl;
return 0;
}
