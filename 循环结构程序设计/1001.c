#include<stdio.h>
int main()
{
    int a;
   while( scanf("%d", &a) != EOF){
    for(int i=1;i<=a;i++){
       for(int b=1;b<=a-i;b++){
          printf(" "); 
       } 
        for(int c=1; c<=2*i-1;c++){
            printf("*");
        }
        printf("\n");
    } 
    for(int i=a-1;i>=1;i--){
       for(int b=1;b<=a-i;b++){
          printf(" "); 
       } 
        for(int c=1; c<= 2*i-1;c++){
            printf("*");
        }
        printf("\n");
    }
   } 
}