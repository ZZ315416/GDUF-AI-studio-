#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 25
#define MAXLEN 1005
char num[MAXN][MAXLEN];
int cmp(const void *a, const void *b)
{
    const char *x = (const char *)a;
    const char *y = (const char *)b;
    char xy[MAXLEN * 2];
    char yx[MAXLEN * 2];
    strcpy(xy, x);
    strcat(xy, y);
    strcpy(yx, y);
    strcat(yx, x);
    return strcmp(yx, xy);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%1004s", num[i]);
    }
    qsort(num, n, sizeof(num[0]), cmp);
    for (int i = 0; i < n; i++) {
        printf("%s", num[i]);
    }
    printf("\n");
    return 0;
}