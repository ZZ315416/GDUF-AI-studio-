#include <stdio.h>
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1);
    long long a[105];
    for (int i = 0; i < n; i++) 
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i] + a[j] > a[k] &&
                    a[i] + a[k] > a[j] &&
                    a[j] + a[k] > a[i]) {
                    printf("%lld %lld %lld\n", a[i], a[j], a[k]);
                }
            }
        }
    }
    printf("No solution\n");
    return 0;
}