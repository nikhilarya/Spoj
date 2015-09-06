#include<bits/stdc++.h>
#include<stdlib.h>
#define max 101
using namespace std;

int main()
{
	int m[max][max],col[max][max];
	int n,i,j,k,l,q;;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&col[i][i]);
		}
		
		for(i=1;i<=n;i++)
		{
			m[i][i]=0;
		}
		
		for(l=2;l<=n;l++)
		{
			for(i=1;i<=n-l+1;i++)
			{
				j=i+l-1;
				m[i][j]=1000000;
				for(k=i;k<=j-1;k++)
				{
					q=m[i][k]+m[k+1][j]+col[i][k]*col[k+1][j];
				
				if(q<m[i][j])
				{
					m[i][j]=q;
					col[i][j]=(col[i][k]+col[k+1][j])%100;
				}
			}
			}
		}
		printf("%d\n",m[1][n]);
		
	}
	return 0;
}
