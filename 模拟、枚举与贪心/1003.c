#include <stdio.h>
#define MAXLEN 10005
char s[MAXLEN];
int main(void)
{
    int n = 0;
    int ch;
    while ((ch = getchar()) != EOF) {
        s[n++] = (char)ch;
    }
    s[n] = '\0';
    int i = 0;
    while (i < n) {
        if (s[i] == '"' && (i == 0 || s[i - 1] != '\\')) {
            putchar(s[i]);
            i++;
            while (i < n) {
                putchar(s[i]);
                if (s[i] == '"' && s[i - 1] != '\\') {
                    i++;
                    break;
                }
                i++;
            }
        } else if (s[i] == '/' && i + 1 < n && s[i + 1] == '*') {
            int j = i + 2;

            while (j + 1 < n && !(s[j] == '*' && s[j + 1] == '/')) {
                j++;
            }
            if (j + 1 < n) {
                i = j + 2;
            } else {
                while (i < n) {
                    putchar(s[i]);
                    i++;
                }
            }
        } else {
            putchar(s[i]);
            i++;
        }
    }
    return 0;
}