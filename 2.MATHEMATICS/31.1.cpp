/* 31.1.GCD of two numbers

	Write a program to find the GCD of given two numbers.
	
	INPUT : 36, 60
	OUTPUT : 12
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int end,hcf,i;
	end=a<b?a:b;
	for(i=1;i<=end;i++)
	{
		if((a%i==0)&&(b%i==0))
		hcf=i;
	}
	return hcf;
}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
return 0;
}
