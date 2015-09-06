#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c=1,i,j;
		scanf("%d",&n);
		int s[n],f[n];
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&s[i],&f[i]);
		}
		sort(f,f+n);
		i=0;
		for(j=0;j<n;j++)
		{
			
			if(s[j]>=f[i])
			{
				c++;
				i=j;
				
			}
			
		}
		printf("%d\n",c);
	}
	return 0;
	
}
