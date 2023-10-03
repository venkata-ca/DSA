/* 33.1.Check if kth bit is set or not using naive approach.
	You will be given a number and you need to find whether the kth bit in binary form is set or not.
	
	INPUT : n = 20, k = 4
	OUTPUT : NOT SET
	
	INPUT : n = 10, k = 2
	OUTPUT : SET
*/
#include<bits/stdc++.h>
using namespace std;
bool kSet(int n,int k)
{
	int count=0,x;
	while(n!=0)
	{
		x=n%2;
		count++;
		if(count==k)
		{
			if(x==1)
			return true;
			else
			return false;
		}
		n=n/2;
	}
}
int main()
{
	int n,k;
	cout<<"Enter the numbers"<<endl;
	cin>>n>>k;
	if(kSet(n,k))
	cout<<"SET"<<endl;
	else
	cout<<"NOT SET"<<endl;
return 0;
}
