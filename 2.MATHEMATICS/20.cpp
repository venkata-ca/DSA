/* 20.Sieve of Eratosthenes
	Write a program to print all the prime numbers upto a number 'n' using Sieve of Erotosthenes method.
	
	INPUT : 10
	OUTPUT : 2 3 5 7
*/
#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
	vector<bool>isPrime(n+1,true);
	for(int i=2;i*i<=n;i++)
	{
		if(isPrime[i])
		{
			for(int j=2*i;j<=n;j=j+i)
			{
				isPrime[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(isPrime[i])
		cout<<i<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	sieve(n);
return 0;
}
