#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
     int i, j;
     int s;
     int r=1;
     char input[10];
     int n = 1;
    printf("give the size for pattern: ");
    scanf("%d", &s);

    getchar();
    printf("give the character/number for the pattern: ");
    scanf("%s", input);
    if (isdigit(input[0])) {
        n = atoi(input);
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (i == j) {
                    printf("%d ", n*r);
                    r++;
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } 
    else {
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (i == j) {
                    printf("%s ", input);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}