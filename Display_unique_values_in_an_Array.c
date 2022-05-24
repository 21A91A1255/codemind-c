#include<stdio.h>
int main()
{
    int arr[100],i,j,n,c,r,k,max=0,a[100],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
               c++;
           }
        }
        if(c==1)
        {
            a[p]=arr[i];
            p++;
            //printf("%d ",arr[i]);
        }
    }
    if(p>0)
    {
        for(i=0;i<p;i++)
            printf("%d ",a[i]);
    }
    else
    {
        printf("-1");
    }
}