#include<bits/stdc++.h>
using namespace std;


int n;
int p[2009];
int cache[2001][2001];

int profit(int be,int en,int y)
	{
		if(be>en)
		{
			return 0;
			
		}
		if(cache[be][en]!=-1)
		{
			return cache[be][en];
		}
	
		return max(profit(be+1,en,y+1)+y*p[be],profit(be,en-1,y+1)+y*p[en]);
	}

int main()
{
	memset(cache,-1,sizeof(cache));
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		
	}
	printf("%d\n",profit(0,n-1,1));
	return 0;
	
	
}
