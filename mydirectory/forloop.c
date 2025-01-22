#include <stdio.h>

int main()
{
    int i, j;
    int s;
    int r=1;
    char c;
    int n = 1;
    printf("give the size for pattern: ");
    scanf("%d", &s);

    getchar();
    printf("give the character/number for the pattern: ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9') {
     n = c - '0';
    
        for ( i = 0; i < s; i++)
        {
           for ( j = 0; j < s; j++) {
            if (i == j) {
                printf("%d ", n*r);
                r++;
            } else {
                printf(" ");
            }
           } printf("\n");
        } 
    }    
    
     else 
    {
        for ( i = 0; i < s; i++)
        {
           for ( j = 0; j < s; j++) {
            if (i == j) {
                printf("%c ", c);
        
            } else {
                printf(" ");
            }
           } printf("\n");
        } 
        
    }
    
   return 0;
}