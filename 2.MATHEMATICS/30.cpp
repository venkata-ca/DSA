/* 30.lCM of two numbers.
	Write a program to find the LCM of the given two numbers.
	
	INPUT : 8, 16
	OUTPUT : 16
*/
#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
	int start,end,i;
	start=(a>b)?a:b;
	end=a*b;
	for(i=start;i<=end;i++)
	{
		if((i%a==0)&&(i%b)==0)
		return i;
	}
}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<lcm(a,b);
return 0;
}
