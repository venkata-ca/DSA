/*7.2.Counting the number of trailing zeroes in a factorial using better approach
	INPUT : 5
	OUTPUT : 1 (5! = 120 --> Has one zero)
*/
#include<bits/stdc++.h>
using namespace std;
int trail(int n)
{
	int res=0;
	for(int i=5;i<=n;i=i+5)
	{
		res=res+(n/i);
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
