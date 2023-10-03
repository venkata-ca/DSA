/* 21.1.Prime factors of a number.
	Write a program to print all the prime factors of a given number.
	
	INPUT : 20
	OUTPUT : 2 2 5
*/
#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n)
{
	if(n<=1)
	return;
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		{
			cout<<i<<endl;
			n=n/2;
		}
	}
	if(n>1)
	cout<<n<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	primeFactors(n);
return 0;
}
