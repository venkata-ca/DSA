/* 38.Power set using bitwise operator.
	You will be given a string and you need to find te power set of the string using bitwise 
	operator.
	
	INPUT: s="abc"
	OUTPUT : " ","a","b","c","ab","bc","ac","abc"
*/
#include<bits/stdc++.h>
using namespace std;
void powerSet(string str)
{
	int n=str.length();
	int powsize=pow(2,n);
	for(int counter=0;counter<powsize;counter++)
	{
		for(int j=0;j<n;j++)
		{
			if(counter&(1<<j))
			cout<<str[j];
		}
		cout<<endl;
	}
}
int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	getline(cin, str);
	//cin>>str;
	powerSet(str);
return 0;
}
