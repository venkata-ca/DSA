/* 36.2. One odd occuring.

	You will be given a set of elements and you need to find the one odd occuring element in 
	that set. Every element will appear even number of times except that one element.
	
	INPUT : arr[]={4,3,4,4,4,5,5}	
	OUTPUT : 3 ==> occurs odd number of times.
*/
#include<bits/stdc++.h>
using namespace std;
int odd(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	res=res^arr[i];
	return res;
}
int main()
{
	int arr[100],n,i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<odd(arr,n)<<endl;
return 0;
}

