#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,b,ans,i;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		
	}
	b=a[0];
	for(i=1;i<n;i++)
	{
		ans=b^a[i];
		b=ans;
	}
	printf("%lld\n",ans);
	return 0;
}
