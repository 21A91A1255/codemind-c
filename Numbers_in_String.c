#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,s=0,r;
    scanf("%[^
]s",str);
    r=strlen(str);
    for(i=0;i<r;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s=s+str[i];
            s=s-48;
        }
    }
    printf("%d",s);
}