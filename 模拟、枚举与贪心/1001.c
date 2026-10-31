#include <stdio.h>
#define MAXLEN 200005
char s[MAXLEN];
int main(void)
{
    int n;
    long long t;
    if (scanf("%d%lld", &n, &t) != 2) ;
    scanf("%200000s", s);
    int dot = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            dot = i;
            break;
        }
    }
    int end = n - 1;
    int p = -1;
    if (dot != -1) {
        for (int i = dot + 1; i <= end; i++) {
            if (s[i] >= '5') {
                p = i;
                break;
            }
        }
    }
    while (p != -1 && t > 0) {
        if (p == dot + 1) {
            int i = dot - 1;
            while (i >= 0 && s[i] == '9') {
                s[i] = '0';
                i--;
            }
            if (i >= 0) {
                s[i]++;
                end = dot - 1;
            } else {
                for (int j = dot; j >= 1; j--) {
                    s[j] = s[j - 1];
                }
                s[0] = '1';
                end = dot;
            }
            p = -1;
            t--;
            break;
        } else {
            s[p - 1]++;
            end = p - 1;
            t--;
            if (s[p - 1] >= '5') {
                p = p - 1;
            } else {
                p = -1;
            }
        }
    }
    int out_end = end;
    if (dot != -1 && out_end > dot) {
        while (out_end > dot && s[out_end] == '0') {
            out_end--;
        }
        if (out_end == dot) {
            out_end--;
        }
    }
    for (int i = 0; i <= out_end; i++) {
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}