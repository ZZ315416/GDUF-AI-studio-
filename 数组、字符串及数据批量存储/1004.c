#include<stdio.h>
int main()
{
    int L=0,M=0;
    scanf("%d %d",&L,&M);
    int s[10001]={0};
    int a=0,b=0;
    int c=0;
    while(scanf("%d %d",&a,&b)!=EOF){
    for(;a<=b;a++){
        s[a]=1;
    }
    }
    for (int i=0;i<=L;i++){
        if (s[i]==1){
            c++;
        }
    }
    int d=0;
    d=L+1-c;
    printf("%d",d);
}