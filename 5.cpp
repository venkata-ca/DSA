//5.1.Sum of squares of n natural numbers using naive approach.
#include<bits/stdc++.h>
using namespace std;
int sumN(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+(i*i);	
	}	
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<sumN(n)<<endl;
return 0;
}
