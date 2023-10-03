/*15.Computing power.
	You will be given two numbers x and y. Write a program to calculate x power y.
	
	INPUT : x=2, y=3
	OUTPUT : 8
*/
#include<bits/stdc++.h>
using namespace std;
int pow(int x,int y)
{
	int res=1;
	for(int i=0;i<y;i++)
	{
		res=res*x;
	}
	return res;
}
int main()
{
	int x,y;
	cout<<"Enter the numbers"<<endl;
	cin>>x>>y;
	cout<<pow(x,y)<<endl;
return 0;
}
