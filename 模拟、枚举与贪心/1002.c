#include <stdio.h>
int main(void)
{
    int mid[10][10] = {0};
    mid[1][3] = mid[3][1] = 2;
    mid[1][7] = mid[7][1] = 4;
    mid[1][9] = mid[9][1] = 5;
    mid[2][8] = mid[8][2] = 5;
    mid[3][7] = mid[7][3] = 5;
    mid[3][9] = mid[9][3] = 6;
    mid[4][6] = mid[6][4] = 5;
    mid[7][9] = mid[9][7] = 8;
    char s[105];
    while (scanf("%100s", s) == 1) {
        int used[10] = {0};
        int prev = -1;
        int ok = 1;
        for (int i = 0; s[i] != '\0'; i++) {
            int cur = s[i] - '0';
            if (cur < 1 || cur > 9 || used[cur]) {
                ok = 0;
                break;
            }
            if (prev != -1 &&
                mid[prev][cur] != 0 &&
                !used[mid[prev][cur]]) {
                ok = 0;
                break;
            }
            used[cur] = 1;
            prev = cur;
        }
        printf("%s\n", ok ? "YES" : "NO");
    }
    return 0;
}