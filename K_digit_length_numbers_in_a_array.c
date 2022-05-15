#include<math.h>
#include<stdio.h>
int main()
{
    int i,arr[100],n,r,m,k=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       int c=0;
       if(arr[i]==0)
       {
           c=1;
       }
       if(arr[i]<0)
       {
           arr[i]=abs(arr[i]);
       }
       {
        while(arr[i]>0)
        {
            r=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        if(c==m)
        {
            k++;
        }
       }
    }
    printf("%d",k);
}