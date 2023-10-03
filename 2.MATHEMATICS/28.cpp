/* 28.Decimal to octal conversion.
	Write a program to convert a given decimal number to an octal number.
	
	INPUT : 15
	OUTPUT : 17
*/
#include<bits/stdc++.h>
using namespace std;
void d2o(int dec)
{
	int oct,x,i;
	vector<int>v;
	while(dec>0)
	{
		x=dec%8;
		v.push_back(x);
		dec=dec/8;
	}
	for(int i=v.size()-1;i>=0;i--)
	cout<<v[i];
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	d2o(n);
return 0;
}
