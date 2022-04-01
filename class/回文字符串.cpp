#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
map<char,char>d;
 
bool palindrome(string s)
{
	int i,j;
	for(i=0,j=s.length()-1;i<j&&s[i]==s[j];i++,j--);
	if(i<j)
	  return false;
	return true;
}
 
bool mirrored(string s)
{
	string p=s;
	for(int i=0;i<s.length();i++)
	  if(d.count(s[i]))
	    s[i]=d[s[i]];
	  else
	    return false;
	for(int i=0;i<s.length();i++)
	  if(s[i]!=p[s.length()-i-1])
	    return false;
	return true;
}
 
int main()
{
	d['A']='A',d['E']='3',d['H']='H',d['I']='I',d['J']='L',d['L']='J';
	d['M']='M',d['O']='O',d['S']='2',d['T']='T',d['U']='U',d['V']='V';
	d['W']='W',d['X']='X',d['Y']='Y',d['Z']='5',d['1']='1',d['2']='S';
	d['3']='E',d['5']='Z',d['8']='8';
	string s;
	while(cin>>s){
		string p=s;
		for(int i=0;i<s.length();i++)
		  if(s[i]=='0')
		    s[i]='O';
		bool flag1=palindrome(s),flag2=mirrored(s);
		if(flag1){
			if(flag2)
			  cout<<p<<" -- is a mirrored palindrome."<<endl<<endl;
			else
			  cout<<p<<" -- is a regular palindrome."<<endl<<endl;
		}
		else{
			if(flag2)
			  cout<<p<<" -- is a mirrored string."<<endl<<endl;
			else
			  cout<<p<<" -- is not a palindrome."<<endl<<endl;
		} 
	}
	return 0;
} 