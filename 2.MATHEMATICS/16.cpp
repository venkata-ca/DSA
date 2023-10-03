/* 16.Iterative power.
	You will be given two numbers and you need to find the power of one number to other number'.
	
	INPUT : x=2, y=3
	OUTPUT : 8
*/
#include<bits/stdc++.h>
using namespace std;
int pow(int x,int n)
{
	int res=1;
	while(n>0)
	{
		if(n%2!=0)
			res=res*x;
		x=x*x;
		n=n/2;
	}
	return res;
}
int main()
{
	int x,y;
	cout<<"Enter the numbers"<<endl;
	cin>>x>>y;
	cout<<pow(x,y)<<endl;
return 0;
}
