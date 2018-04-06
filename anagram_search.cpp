#include<iostream>
using namespace std;
int look(int *s,int *p)
{
	int i;
	for(i=0;i<256;i++)
	    if(s[i]!=p[i])
	        return 0;
	return 1;
}
int main()
{
	string txt= "BACDGABCDA",pat= "ABCD";
	int pattern[256]={0};
	int i=0,j;
	while(pat[i])
	{
		pattern[pat[i]]++;
		i++;
	}
    int search[256]={0};
    i=0;
	j=0;
	while(i<pat.length()&&j<txt.length())
	{
		search[txt[i]]++;
		i++;
		j++;
	}
	for(i=j;i<=txt.length();i++)
	{
		int l;
		l=look(search,pattern);
		if(l==1)
		    cout<<"found at "<<i-j<<endl;
		search[txt[i-j]]--;
		search[txt[i]]++;
	}
}
