/* 19.2. Write a program to check if a given number is prime number or not using efficient approach.
	INPUT : 7
	OUTPUT : Prime
*/
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(prime(n)==1)
	cout<<"Prime number"<<endl;
	else
	cout<<"Not a prime number"<<endl;
return 0;
}
