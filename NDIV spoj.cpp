#include<bits/stdc++.h>
using namespace std;
int check[32000];
int prime[32000];

int main()
{
	int i,j,k;
	for(i=3;i<=180;i+=2)
    {
        if(!check[i])
        {
            for(j=i*i;j<=32000;j+=i)
                check[j]=1;
        }
    }
    prime[0] = 2;
     j=1;
    for(i=3;i<=32000;i+=2)
    {
        if(!check[i]){
            prime[j++]=i;
            
        }
    }
    
    int a,b,n,ans=0,total,temp,i,count;
    scanf("%d%d%d",&a,&b,&n);
    for(i=a;i<=b;i++)
    {
    	total=1;
    	temp=i;
    	int k=0;
    	for(j=prime[k];j*j<=temp;j=prime[++k])
    	{
    		count=0;
    		if(temp%j==0)
    		{
    			count++;
    			temp/=j;
			}
			total*=count+1;
			
		}
		if(temp!=1)
		total*=2;
		if(total==n)
		ans++;
		
	}
    printf("%d\n",ans);
	return 0;
}
