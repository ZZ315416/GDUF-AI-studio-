#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int cnt=0;
    for(int i=a;i<=b;i++){
        int n=i;
        while(n>0){
            if(n%10==2){
                cnt++;
            }
            n/=10;
        }
    }
    printf("%d",cnt);
}