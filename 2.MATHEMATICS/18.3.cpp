/* 19.3. Write a program to check if a given number is prime number or not using best approach.
	INPUT : 7
	OUTPUT : Prime
*/
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n==1)
	return false;
	if(n==2 || n==3)
	return true;
	if(n%2==0 || n%3==0)
	return false;
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0 ||n%(i+2)==0)
		return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(prime(n))
	cout<<"Prime number"<<endl;
	else
	cout<<"Not a prime number"<<endl;
return 0;
}
