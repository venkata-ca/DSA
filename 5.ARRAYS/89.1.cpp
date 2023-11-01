/*
89.1.Maximum consecutive ones in a binary array.

    Write a program to count the maximum consecutive 1's in a given binary array.

    INPUT : arr[] = {0,1,1,0,1,0}
    OUTPUT : 2

    INPUT : arr[] = {0,1,0,1,1,1,1,0,1,1}
    OUTPUT : 4
*/
#include<bits/stdc++.h>
using namespace std;
int maxOnes(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==1)
			curr++;
			else
			break;
		}
		res=max(res,curr);
	}
	return res;
}
int main()
{
	int n,arr[100],i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<maxOnes(arr,n)<<endl;
return 0;
}