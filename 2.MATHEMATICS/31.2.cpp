/* 31.2.GCD of two numbers

	Write a program to find the GCD of given two numbers.
	
	INPUT : 36, 60
	OUTPUT : 12
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
return 0;
}
