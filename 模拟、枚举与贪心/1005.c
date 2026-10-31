#include <stdio.h>
int main(void)
{
    int cnt[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &cnt[i]);
    }
    int odd = 0;
    int center = -1;
    for (int d = 0; d <= 9; d++) {
        if (cnt[d] % 2 == 1) {
            odd++;
            center = d;
        }
    }
    if (odd > 1) {
        printf("-1\n");
        return 0;
    }
    int first = -1;
    for (int d = 1; d <= 9; d++) {
        if (cnt[d] >= 2) {
            first = d;
            break;
        }
    }
    if (first == -1) {
        if (cnt[0] == 1) {
            printf("0\n");
        } else if (cnt[0] == 0 && center != -1) {
            printf("%d\n", center);
        } else {
            printf("-1\n");
        }
        return 0;
    }
    char left[105];
    int len = 0;
    left[len++] = (char)('0' + first);
    for (int i = 0; i < cnt[0] / 2; i++) {
        left[len++] = '0';
    }
    for (int i = 0; i < cnt[first] / 2 - 1; i++) {
        left[len++] = (char)('0' + first);
    }
    for (int d = first + 1; d <= 9; d++) {
        for (int i = 0; i < cnt[d] / 2; i++) {
            left[len++] = (char)('0' + d);
        }
    }
    for (int i = 0; i < len; i++) {
        putchar(left[i]);
    }
    if (center != -1) {
        putchar((char)('0' + center));
    }
    for (int i = len - 1; i >= 0; i--) {
        putchar(left[i]);
    }
    putchar('\n');
    return 0;
}