/*7.1.Counting the number of trailing zeroes in a factorial using naive approach
	INPUT : 5
	OUTPUT : 1 (5! = 120 --> Has one zero)
*/
#include<bits/stdc++.h>
using namespace std;
int trail(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	int res=0;
	while(fact%10==0)
	{
		res++;
		fact=fact/10;
	}
	return res;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<trail(n)<<endl;
return 0;
}
