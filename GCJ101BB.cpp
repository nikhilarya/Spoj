#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	int i,j,x,y;
	for(j=1;j<=t;j++)
	{
		int n,k,b,t,swaps,finish;
		scanf("%d%d%d%d",&n,&k,&b,&t);
		x=y=0;
		int a[n],b1[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b1[i]);
		}
		i=n-1;
		swaps=0;
		while(i>=0&&x<k)
		{
			finish=a[i]+b1[i]*t;
			if(finish<b)
			{
				++y;
			}
			else
			{
				++x;
				swaps+=y;
			}
			--i;
		}
		if(x==k)
        {
            printf("Case #%d: %d\n",j,swaps);
        }
        else
        {
            printf("Case #%d: IMPOSSIBLE\n",j);
        }
	}
}

