#include<stdio.h>
int main()
{
    long long int x,y,z;
    scanf("%lld%lld",&x,&y);
        if(y%x==0)
            z=x+y;
        else
            z=y-x;
    printf("%lld\n",z);
}