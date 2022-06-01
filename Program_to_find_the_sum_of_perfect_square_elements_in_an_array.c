#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,k,p,temp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        k=sqrt(arr[i]);
        p=k*k;
       // printf("%d ",p);
       k=temp-p;
       if(k==0)
       {
           sum=sum+arr[i];
       }
    }
    printf("%d",sum);
}