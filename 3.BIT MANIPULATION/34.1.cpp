/* 34.1.Count the number of set bits using naive approach.

	You will be given a number and you need to count the number of set bits in its binary form.
	
	INPUT : 10
	OUTPUT : 2 (1010)
*/
#include<bits/stdc++.h>
using namespace std;
int countSet(int n)
{
	int count=0;
	while(n!=0)
	{
		if(n%2==1)
		count++;
		n=n/2;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<countSet(n)<<endl;
return 0;
}
