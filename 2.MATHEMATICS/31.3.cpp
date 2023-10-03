/* 31.3.GCD of two numbers

	Write a program to find the GCD of given two numbers using recursion.
	
	INPUT : 36, 60
	OUTPUT : 12
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
return 0;
}
