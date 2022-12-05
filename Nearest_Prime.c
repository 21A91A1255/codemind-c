#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int j;
    if(n==1)
    {
        return 0;
    }
    for(j=2;j<(sqrt(n)+1);j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,k,p,j,r;
        scanf("%d",&a);
        for(k=a;k>=0;k--)
        {
            if(isprime(k))
            {
                r=k;
                break;
            }
        }
        for(j=a+1;j<a*a;j++)
        {
            if(isprime(j))
            {
                p=j;
                break;
            }
        }
        if((p-a)>=(a-r))
        {
            printf("%d
",r);
        }
        else
        {
            printf("%d
",p);
        }
    }
}