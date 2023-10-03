/*40.Gray to binary code conversion.
	Write a program to convert a given gray code into binary code.
	
	INPUT : x = 5 (101)
	OUTPUT : 6 (110)
*/
#include<bits/stdc++.h>
using namespace std;
int binary(int x)
{
	int res=0;
	while(x>0)
	{
		res=res^x;
		x=x>>1;
	}
	return res;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<binary(n)<<endl;
return 0;
}
