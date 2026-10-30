#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int arr[10005];
    while(T--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int min=arr[0];
        int max=arr[0];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
            sum=sum+arr[i];
        }
        int jicha=max-min;
        double ave=sum*1.0/n;
        double sum2=0;
        for(int i=0;i<n;i++)
        {
           double t=(arr[i]-ave)*(arr[i]-ave);
            sum2+=t;
        } 
       double fangcha=sum2*1.0/n;
        printf("%d %.3f\n",jicha,fangcha);
    }
}