/* 23.Numbers with exactly three divisors in a given range.
	Write a program to count the numbers which are having three divisors in a given range.
	
	INPUT : 25
	OUTPUT : 4 9 25
*/
#include<bits/stdc++.h>
using namespace std;
void divisors(int n)
{
	int count;
	for(int i=3;i<=n;i++)
	{
		count=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==3)
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
