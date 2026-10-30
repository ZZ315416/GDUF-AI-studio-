#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d", &n);
    int k=1;
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
           printf("%4d",k);
           k++;
        }
        printf("\n");}
    }