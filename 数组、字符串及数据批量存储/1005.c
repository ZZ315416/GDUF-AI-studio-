#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],lp;
    for (i = 0;i < n;i++){
        int b;
        scanf("%d",&b);
        a[i] = b;
        if (b == 0 || b == 15) lp = b;
    }
    if (lp == 15) printf("DOWN");
    else 
        if (lp == 0) printf("UP");
    else 
        if (n <= 1) printf("-1");
    else 
        if (a[n - 1] > a[n - 2]) printf("UP");
    else 
        if (a[n - 1] < a[n - 2]) printf("DOWN");
    else
        printf("-1");
}