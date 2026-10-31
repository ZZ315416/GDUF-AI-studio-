#include <stdio.h>
#include <stdlib.h>
typedef struct ckl
{
	int day;
	int neight;
	int nub;
}co;
co arr[100005];
int cmp(const void *a,const void *b)
{
	co * p1 = (co*)a;
	co * p2 = (co*)b;
	return p2 ->nub - p1 -> nub;
}
int main()
{	int n,k;
	scanf("%d%d",&n,&k);
	for (int i = 0; i < n;i++)
	{
		scanf("%d",&arr[i].day);
	}
	for (int i = 0; i < n;i++)
	{
		scanf("%d",&arr[i].neight);
	}
	for (int i = 0; i < n;i++)
	{
		arr[i].nub = arr[i].day - arr[i].neight;
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	long long sum = 0;
	for (int i = 0 ; i < k;i++)
	{
		sum += arr[i].day;
	}
	for (int i = k ; i < n;i++)
	{
		sum += arr[i].neight;
	}
	printf("%lld\n",sum);
	return 0;
}