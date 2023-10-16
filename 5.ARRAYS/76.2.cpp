/*
76.2.Remove duplicates from a sorted array using efficient approach.

    Write a program to remove the duplicates from the given unsorted array.

    INPUT : arr[]={10,20,20,30,30,30,30}  n=7
    OUTPUT : arr[]={10,20,30}
*/
#include<bits/stdc++.h>
using namespace std;
void removeDup(int arr[],int n)
{
    int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++)
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
	removeDup(arr,n);
return 0;
}