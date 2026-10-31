#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    char s1[55], s2[55];
    while (T--) 
    {
        scanf("%s %s", s1, s2);
        int len1 = strlen(s1), len2 = strlen(s2);
        int res[110] = {0};
        for (int i = 0; i < len1; i++)
            for (int j = 0; j < len2; j++)
                res[i + j] += (s1[len1 - 1 - i] - '0') * (s2[len2 - 1 - j] - '0');
        int max_len = 0;
        for (int i = 0; i < len1 + len2; i++) {
            if (res[i] > 9) {
                res[i + 1] += res[i] / 10;
                res[i] %= 10;
            }
            if (res[i]) max_len = i;
        }
        for (int i = max_len; i >= 0; i--)
            printf("%d", res[i]);
        printf("\n");
    }
    return 0;
}