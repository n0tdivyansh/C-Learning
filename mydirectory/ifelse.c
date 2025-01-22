#include <stdio.h>

int main()
{
    float a, b;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    
    scanf("%f", &b);

    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a < b)
    {
        printf("a is lesser than b");
    }
    else 
    {
        printf("a is equal to b");
    }

 return 0;   
}