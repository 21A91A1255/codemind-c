#include<stdio.h>
int main()
{
    int a[10000],i,n,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]==-1)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
        }
    }
}