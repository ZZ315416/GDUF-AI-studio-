#include <stdio.h>
#include <string.h>
#define MAXLEN 100005
char s[MAXLEN];
int main(void)
{
    int T;
    scanf("%d", &T);
    const char *word[5] = {"zero", "two", "four", "six", "nine"};
    char digit[5] = {'0', '2', '4', '6', '9'};
    int wlen[5] = {4, 3, 4, 3, 4};
    while (T--) {
        scanf("%100000s", s);
        int n = (int)strlen(s);
        for (int i = 0; i < n; ) {
            if (s[i] == '0' || s[i] == '2' || s[i] == '4' ||
                s[i] == '6' || s[i] == '9') {
                putchar(s[i]);
                i++;
            } else {
                int matched = -1;
                for (int k = 0; k < 5; k++) {
                    if (strncmp(s + i, word[k], wlen[k]) == 0) {
                        matched = k;
                        break;
                    }
                }
                if (matched != -1) {
                    putchar(digit[matched]);
                    i += wlen[matched];
                } else {
                    i++;
                }
            }
        }
        putchar('\n');
    }
    return 0;
}