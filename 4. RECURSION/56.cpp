/* 56.Calculate power using recursion.

	You will be given two numbers. Write a program to find the power of one number with
	another number using recursion.
	INPUT : n=2 p=3
	OUTPUT : 2**3=8
*/
#include<bits/stdc++.h>
using namespace std;
int power(int n,int p)
{
	if(p==0)
	return 1;
	return n*power(n,p-1);
}
int main()
{
	int n,p;
	cout<<"Enter the values of n and p"<<endl;
	cin>>n>>p;
	cout<<power(n,p);
return 0;
}
