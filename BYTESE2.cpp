#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
   scanf("%d",&t);
    while(t--)
    {
        vector< pair<int,int> > v;
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            v.push_back(make_pair(a,b));
        }
        
        sort(v.begin(),v.end());
        int max=0;
      for(int j=0;j<v.size();j++)
      {
        int count=1;
        for(int k=0;k<v.size();k++)
        {
        if(k==j)  continue;
        if(v[k].first<v[j].second && v[k].second>=v[j].second)
              { count++; 
               
               }
        }
        if(count>=max)
          max=count;
        }
        printf("%d\n",max);
    }
    return 0;
}
