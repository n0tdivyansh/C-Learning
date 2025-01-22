#include <stdio.h>

int main()
{
int i, j;
int n = 5;
char c;
printf("give the character for pattern: ");
scanf("%c", &c);

for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n; j++)
    {
        if (i == j)
        {
            printf("%c ", c);
        }
        else
        {
            printf(" ");
        }
        
    }
    printf("\n");
}
 return 0;
 
}