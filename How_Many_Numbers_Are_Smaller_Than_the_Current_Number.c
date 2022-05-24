#include<stdio.h>
int main()
{
    int arr[100],i,j,n,c,r,k;
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
            if(j!=i && arr[j]<arr[i])
            {
                c++;
               // printf("%d ",c);
            }
        }
        printf("%d ",c);
    }
}