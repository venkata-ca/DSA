/* 11.Write a program to check whether the given year is leap year or not
	INPUT : 2020
	OUTPUT : Leap year
*/
#include<bits/stdc++.h>
using namespace std;
bool leap(int year)
{
	if(year%400==0)
	return true;
	else if(year%4==0 && year%100!=0)
	return true;
	else
	return false;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(leap(n))
	cout<<"Leap year"<<endl;
	else
	cout<<"Not a leap year"<<endl;
return 0;
}
