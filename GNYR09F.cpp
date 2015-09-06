#include<bits/stdc++.h>
using namespace std;

int main()
{
	int dp[110][110][2];
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
	
	int idx,n,k,i,j,b,ans;
	scanf("%d%d%d",&idx,&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;k<=k;j++)
		{
			for(b=0;b<2;b++)
			{
				dp[i][j][b]=0;
			}
		}
	}
	dp[1][0][0]=dp[1][0][1]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=k;j++)
		{
			dp[i][j][0]=dp[i-1][j][0]+dp[i-1][j][1];
			if(j>0)
			dp[i][j][1]=dp[i-1][j-1][1];
			dp[i][j][1]+=dp[i-1][j][0];
		}
	}
	ans=dp[n][k][0]+dp[n][k][1];
	printf("%d%d\n",idx,ans);
}
return 0;
}
