#include<stdio.h>
int find(int *arr,int n,int m)
{
    int i,sum=0,avg;
      for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,arr[100],i,m;
    float sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   if(find(arr,n,m))
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
   // printf("%.2f",avg);
    
}