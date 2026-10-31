#include <stdio.h>
#define MAXLEN 100005
char s[MAXLEN];
int main(void)
{
    if (scanf("%100000s", s) != 1) ;
    int balance = 0;
    int good = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a')
        {
            balance++;
        } 
        else if (s[i] == 'b') {
            balance--;
            if (balance < 0) {
                good = 0;
                break;
            }
        } else {
            good = 0;
            break;
        }
    }
    if (balance != 0) {
        good = 0;
    }
    if (good) {
        printf("Good\n");
    } else {
        printf("Bad\n");
    }
    return 0;
}