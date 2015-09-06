#include<bits/stdc++.h>
using namespace std;
int a[111][111];
int max(int a,int b,int c)
{
	if(a>=b&&a>=c)
	return a;
	if(b>=c)
	return b;
	else
	return c;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,w,i,j;
		scanf("%d %d",&h,&w);
		for(i=1;i<=h;i++)
		{
			
			for(j=1;j<=w;j++)
			scanf("%d",&a[i][j]);
			a[i][j]=0;
			for(j=1;j<=w;j++)
			{
				a[i][j]=a[i][j]+max(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
			}
		}
		int ans=a[h][1];
		for(i=2;i<=w;i++)
		{
			ans=max(ans,a[h][i],0);
		}
		printf("%d\n",ans);
	}
	return 0;
}
