#include <stdio.h>
int main(){
    int sum = 0;
   
    for (int i = 100; i <= 500; i++){
        if (i % 9 == 0){
            sum += i;
        }
    }
    for (int j = 100; j <=500; j++)
    {
        if (j % 9 == 0)
        {
            printf("%d + ", j);
        }
        if (j > 490 && j % 9 == 0)
        {
            printf("%d ", j);
        }
    }
    printf("= %d\n", sum);
    return 0;
}