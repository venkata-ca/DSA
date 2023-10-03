/* 51.Palindrome checking using recursion.

	Write a program to check whether the given input string is palindrome or not using 
	recursion.
	
	INPUT : "madam"
	OUTPUT : YES
*/
#include<bits/stdc++.h>
using namespace std;
bool pal(string &str,int start,int end)
{
	if(start>=end)
	return true;
	return (str[start]==str[end])&&pal(str,start+1,end-1);
}
int main()
{
	string str;
	int start,end;
	cout<<"Enter the string"<<endl;
	getline(cin,str);
	start=0;
	end=str.length()-1;
	bool x=pal(str,start,end);
	if(x)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
return 0;
}
