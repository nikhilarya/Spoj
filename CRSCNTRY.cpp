#include<bits/stdc++.h>
using namespace std;


int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
  
   
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   
   return L[m][n];
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int y=-1;
		int u,v,temp;
		char anag[2001];
		char tom[2001];
		temp=1;
		u=0;
		while(temp!=0)
		{
			scanf("%d", &temp);
			anag[u]=temp;
			u++;
		}
		
		while(1)
		{
			scanf("%d", &temp);
			if(temp==0)
				break;
			else
			{
				v=1;
				tom[0]=temp;
				while(temp!=0)
				{
					scanf("%d", &temp);
					tom[v]=temp;
					v++;
				}
		}
				y=max(y,lcs(anag,tom,u,v));			
		
		}
		printf("%d\n",y-1);
		
	}
	return 0;
	
}
