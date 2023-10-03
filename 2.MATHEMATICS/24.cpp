/* 24.Count of divisors of  a given number.
	Write a program to count the divisors of a given number.
	
	INPUT : 15
	OUTPUT : 4 (1,3,5,15)
*/
#include<bits./stdc++.h>
using namespace std;
int countDivisors(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<countDivisors(n)<<endl;
return 0;
}
