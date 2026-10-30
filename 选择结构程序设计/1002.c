#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    if (n%2==1)
        x=3*n+1;
        else
            x=n/2;
            printf("%d",x);
}