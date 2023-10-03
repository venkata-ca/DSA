/* 26.Decimal to binary conversion.
	Write a program to convert a given decimal number into a binary number.
	
	INPUT : 10
	OUTPUT : 1010
*/
#include<bits/stdc++.h>
using namespace std;
void d2b(int dec)
{
	int bin,x;
	vector<int>v;
	while(dec>0)
	{
		x=dec%2;
		v.push_back(x);
		dec=dec/2;
	}
	for(int i=v.size()-1;i>=0;i--)
	cout<<v[i];
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	d2b(n);
return 0;
}
