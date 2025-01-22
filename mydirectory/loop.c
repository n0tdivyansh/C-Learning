#include <stdio.h>

int main()
{

    int range, i = 0;
    printf("enter the range: ");
    scanf("%d", &range);
    do
    {
        printf("%d\n", i);
        i++;

    } while (i <= range);

    return 0;
}
