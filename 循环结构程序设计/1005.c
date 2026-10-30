#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=1;j<=2*(n-i);j++)
            {
                printf(" ");
            }
            for(int j=1;j<=i+1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=2*i;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=n-i+1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}