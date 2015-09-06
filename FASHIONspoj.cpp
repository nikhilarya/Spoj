#include<stdio.h>
#define max 1000
void quicksort(int x[max],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

int main()
{

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,s=0;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		quicksort(a,0,n-1);
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
			
			
		}
		quicksort(b,0,n-1);
		for(i=0;i<n;i++)
		{
			s=s+a[i]*b[i];
			
		}
		printf("%d\n",s);
		
		
	}
	return 0;
}
