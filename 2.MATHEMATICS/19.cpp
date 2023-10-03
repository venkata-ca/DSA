/* 19.Write a program to print all the prime numbers in a given range.
	INPUT : 10
	OUTPUT : 2 3 5 7
*/
#include<bits/stdc++.h>
using namespace std;
void primeRange(int n)
{
	int flag;
	for(int i=2;i<=n;i++)
	{
		flag=0;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<i<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	primeRange(n);
return 0;
}
