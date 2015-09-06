#include<bits/stdc++.h>
using namespace std;
vector<int> arr[2005];
int sum[2005];
int f;
void dfs(int x)
{
	int ln,i;
	for(i=0,ln=arr[x].size();i<ln;i++)
	{
		int y=arr[x][i];
		if(sum[y]==-1)
		{
			sum[y]=!sum[x];
			dfs(y);
		}
	
	}
	
	
}
int main()
{
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--)
	{
		 int n,m,i,a,b,f,j;
  			memset(sum, -1, sizeof(sum));
  			for(i=1;i<2001;i++)
   arr[i].clear();
		
		scanf("%d %d",&n,&m);
		
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			arr[a].push_back(b);
			arr[b].push_back(a);
			
		}
		f=1;
		for(i=1;i<=n;i++)
		{
			if(sum[i]==-1)
			{
				sum[i]=0;
				dfs(i);
			}
			for(j=0;arr[i].size();j++)
			{
				if(sum[i]==sum[arr[i][j]])
				{
					f=0;
					break;
				}
			}
			
		}
		printf("Scenario #%d:\n", k++);
		if(f)
		printf("No suspicious bugs found!");
		else
		printf("Suspicious bugs found!");
		
		
	}
	return 0;
}
