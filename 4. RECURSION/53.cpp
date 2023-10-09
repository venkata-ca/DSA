/* 53.Generate subsets.

	Write a program to generate all the subsets of a given string using recursion.
	
	INPUT : s = "AB"
	OUTPUT : "", A, B, AB
	
	INPUT : s = "ABC"
	OUTPUT : "", A, B, C, AB, BC, AC, ABC
*/
#include<bits/stdc++.h>
using namespace std;
void subsets(string s,string curr="",int i=0)
{
	if(i==s.length())
	{
		cout<<curr<<" ";
		return;
	}
	subsets(s,curr,i+1);
	subsets(s,curr+s[i],i+1);
}
int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	getline(cin, str);
	//cin>>str;
	subsets(str,"",0);
return 0;
}
