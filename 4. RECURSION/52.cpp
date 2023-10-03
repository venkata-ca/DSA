/* 52.Rope cutting problem.

	You will be given a rope of size n. You need to cut the rope into maximum number of 
	pieces such that the size of the pieces should be of length in (a,b,c).
	
	INPUT : n=5, a=2, b=5, c=1
	OUTPUT : 5 (Length 1 each)
	
	INPUT : n=23, a=12, b=9, c=11
	OUTPUT : 2 (11 and 12)
	
	INPUT : n=5, a=4, b=2, c=6
	OUTPUT : -1 (Can't cut)
*/
#include<bits/stdc++.h>
using namespace std;
int maxPieces(int n,int a,int b,int c)
{
	if(n==0)
		return 0;
	if(n<0)
		return -1;
	int res1=max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c));
	int res=max(res1,maxPieces(n-c,a,b,c));
	if(res==-1)
		return -1;
return res+1;
}
int main()
{
	int a,b,c,n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"Enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	int res=maxPieces(n,a,b,c);
	cout<<res<<endl;
return 0;
}
