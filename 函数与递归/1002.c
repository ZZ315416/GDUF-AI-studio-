#include <stdio.h>
int main()
{
    int y, m, x;
    while (scanf("%d %d %d", &y, &m, &x) != EOF) {
        int days = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            days = 30;
        } else if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
        }
        
        int ans = 0;
        char target = x + '0'; 
        char dateStr[15];
        for (int d = 1; d <= days; d++)
        {
            sprintf(dateStr, "%04d-%02d-%02d", y, m, d);
            for (int i = 0; dateStr[i] != '\0'; i++) {
                if (dateStr[i] == target) {
                    ans++;
                }
            }
        }
        
        printf("%d\n", ans);
    }
    
    return 0;
}