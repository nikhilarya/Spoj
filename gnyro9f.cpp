#include<bits/stdc++.h>
using namespace std;
int dp[102][2][102];
int n,k;
int T(int i,int last,int sum)
{
	
	if(i==n&&sum==k)
	return 1;
	else if(i==n)
	return 0;
	
	int &rel=dp[i][last][sum];
	if(rel!=-1)
	return rel;
	rel=0;
	if(last==0)
	{
		rel+=T(i+1,0,sum);
		rel+=T(i+1,1,sum);
		
	}
	else
	{
		rel+=T(i+1,1,sum+1);
		rel+=T(i+1,0,sum);
		
	}
	return rel;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		memset(dp,-1,sizeof dp);
		int idx;
		scanf("%d%d%d",&idx,&n,&k);
		int rel=T(1,0,0);
		rel+=T(1,1,0);
		printf("%d\n",rel);
		
	}
	return 0;
}
