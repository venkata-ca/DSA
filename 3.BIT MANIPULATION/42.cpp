/*42.Count the number of bits to be flipped to convert A to B.
	You will be given two numbers A and B. Write a program to find out how many bits need to be
	flipped so that both numbers will be same.
	
	INPUT : A=10 B=20
	OUTPUT : 4
	A=01010  B=10100 --> 4 bits needs to be flipped.
*/
#include<bits/stdc++.h>
using namespace std;
int count(int a,int b)
{
	int val=a^b;
	int c=0;
	while(val)
	{
		if(val & 1)
		c++;
		val=val>>1;
	}
	return c;
}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<count(a,b)<<endl;
return 0;
}
