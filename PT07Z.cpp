#include<bits/stdc++.h>
using namespace std;
vector<int> vec[100009];
bool visit[100009];
int dist[100009];
int total=0;
int dfs(int v)
{
	int m,m1=-1,m2=-1;
	
	visit[v]=true;
	
	vector<int >::iterator it;
	for(it=vec[v].begin();it!=vec[v].end();it++)
	{
		if(visit[*it]==false)
		{
			dist[*it]=dist[v]+1;
			//cout<<*it<<" ";
			m=dfs(*it);
			if(m>=m1)
            {
                m2= m1;
                m1 = m;
            }
            else if(m>m2)
                m2=m;
		}
		
	}
	total = max(total , m1+m2+2);
    return (m1 + 1);
}
int main()
{
	int n,a,b,i;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		vec[a].push_back(b);
		vec[b].push_back(b);
	}
	
	//cout<<"2"<<" ";
	dfs(1);
	
		printf("%d\n",total);
	
	return 0;
}
