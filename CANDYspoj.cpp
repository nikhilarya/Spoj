#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		long long int i,n;
		scanf("%lld",&n);
		long long int sum=0;
		
		
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		if(sum>n)
		sum=sum%n;
	
	
		if(sum==0)
		{
		
		
		printf("YES\n");
	}
	else
	printf("NO\n");
		
		
		
		
	}
	return 0;
	
}
