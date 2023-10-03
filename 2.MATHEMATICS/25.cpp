/* 25.Binary to decimal conversion.
	Write a program to convert the given binary number into decimal number.
	
	INPUT : 1010
	OUTPUT : 10
*/
#include<bits/stdc++.h>
using namespace std;
int b2d(int bin)
{
	int base=1,dec=0,x;
	while(bin!=0)
	{
		x=bin%10;
		dec=dec+(x*base);
		base=base*2;
		bin=bin/10;
	}
	return dec;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<b2d(n)<<endl;
return 0;
}
