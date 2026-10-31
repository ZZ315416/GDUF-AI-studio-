#include<stdio.h>
signed main()
{
int a,b,x=0;
scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {int c=0;
        for(int k=i;k;c+=k%10,k/=10);
     if(c%5==0)
     {x++;}
    }
    printf("%d",x);
    return 0;
}