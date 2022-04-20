#include<stdio.h>
int find(int *arr,int n,int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,arr[100],i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
   if(find(arr,n,m))
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}