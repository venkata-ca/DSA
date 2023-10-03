/* 22.1.All divisors of a number
	Write a program to print all the divisors of a given number.
	
	INPUT : 10
	OUTPUT : 1 2 5 10
*/

#include<bits/stdc++.h>
using namespace std;
void divisors(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		cout<<i<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	divisors(n);
return 0;
}
