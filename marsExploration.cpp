#include<iostream>
using namespace std;
int main()
{
	string s,s1,str="SOS";
	getline(cin,s);
	s1=str;
	int len=s.length();
	cout<<len;
	for(int i=0;i<=len;i++)
	str=s1+str;
	cout<<str;
}
