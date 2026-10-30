#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int count=0,a;
    for(int i=1;i<=n;i++)
    {
        a=i;
        while(a>0)
        {
            if(a%10==x){
                count++;
            }
            a=a/10;
        }
    }
       printf("%d",count);
}