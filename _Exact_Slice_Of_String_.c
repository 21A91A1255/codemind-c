#include<stdio.h>
int main()
{
    char str[100];
    int i,n,a,b;
    scanf(" %[^
]s",str);
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        
            printf("%c",str[i]);
        
    }
}