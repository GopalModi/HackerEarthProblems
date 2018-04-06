#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,4,-2,-2,5,-4,3};
	map<int,int> m;
	int sum=0;
	for(int i=0;i<7;i++)
	{
		sum+=a[i];
		if(m[sum])
		{
			cout<<"it has zero sum";
			break;
		}
		else
		   m[sum]=1;
	    		   
	}
}
