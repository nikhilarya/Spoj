#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l=1;
    scanf("%d",&t);
    while(t--)
    {
        int i,tar,ppll;
        scanf("%d%d",&tar,&ppll);
        int arr[ppll];
        for(i=0;i<ppll;i++)
             scanf("%d",&arr[i]);
        sort(arr,arr+ppll);
        int sum=0;
        for(i=ppll-1;i>=0;i--)
        {
            sum+=arr[i];
            if(sum>=tar)
                break;
        }
        printf("Scenario #%d:\n",l++);
        if(sum>=tar)
            printf("%d\n",ppll-i);
        else
            printf("impossible\n");
    }
    return 0;
}
