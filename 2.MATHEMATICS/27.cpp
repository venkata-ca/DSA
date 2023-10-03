/* 27.Octal to decimal conversion.
	Write a program to convert a given octal number to a decimal number.
	
	INPUT : 17
	OUTPUT : 15
*/
#include<bits/stdc++.h>
using namespace std;
int o2d(int oct)
{
	int base=1,dec=0,x;
	while(oct!=0)
	{
		x=oct%10;
		dec=dec+(x*base);
		base=base*8;
		oct=oct/10;
	}
	return dec;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<o2d(n)<<endl;
return 0;
}
