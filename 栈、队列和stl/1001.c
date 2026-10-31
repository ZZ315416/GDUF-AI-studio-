#include<stdio.h>
int a[10],b[10] = {0};
void dfs(int x)
{
    if(x == 8)
    {
        for(int i = 0;i < 8;i++)
            printf("%d ",a[i]);
        printf("\n");
        return;
    }  
    for(int i = 0;i < 8;i++)
    {
        if(b[i] == 0)
        {
            a[x] = i+1;
            b[i] = 1;
            dfs(x+1);
            b[i] = 0;
        } 
    }
            
}
int main()
{
    dfs(0);
    return  0;
}