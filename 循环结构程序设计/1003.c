#include <stdio.h>
int main() 
{
char ch;
scanf("%c", &ch);
 int n = ch -'A' + 1;
    for (int i = 1;i <= n;i++) {
        for (int d = 0;d < n-i;d++) {
            printf(" "); 
        }
        for (int c = 0;c<i;c++) {
            printf("%c", 'A' +c);
        }
        for (int j = i - 2;j >= 0;j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}