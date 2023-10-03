/* 33.2.Check if kth bit is set or not using Left shift.
	You will be given a number and you need to find whether the kth bit in binary form is set or not.
	
	INPUT : n = 20, k = 4
	OUTPUT : NOT SET
	
	INPUT : n = 10, k = 2
	OUTPUT : SET
*/
#include<bits/stdc++.h>
using namespace std;
bool kSet(int n,int k)
{
	if(n&(1<<(k-1))!=0)
	return true;
	else
	return false;
}
int main()
{
	int n,k;
	cout<<"Enter the numbers"<<endl;
	cin>>n>>k;
	if(kSet(n,k))
	cout<<"SET"<<endl;
	else
	cout<<"NOT SET"<<endl;
return 0;
}
