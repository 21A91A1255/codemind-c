#include<stdio.h>
int main()
{
    int i,n,arr[100],m,l,k=0,c=0,arr1[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&m,&l);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m || arr[i]>l)
        {
            c++;
            sum=sum+arr[i];
            //arr1[k]=arr[i];
            
            k++;
        }
    }
    printf("%d",sum);
}