/* 55.Josephus problem.

	Kill the kth person among the n persons repeatedly until one person left.
	
	INPUT : n=7 k=3
	OUTPUT : 3
*/
#include <bits/stdc++.h>
using namespace std;
int jose(int n,int k)
{
	if(n==1)
	return 0;
	else
	return (jose(n-1,k)+k)%n;
}
int main()
{
	int n,k;
	cout<<"Enter the values of n and k"<<endl;
	cin>>n>>k;
	cout<<jose(n,k)<<endl;
return 0;
}
