#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter nmber2: ");
    scanf("%d", &num2);
    if (num1==num2){
        printf("Numbers are equal\n");
    }
    else{
        printf("Numbers are not equal\n");
    }
    return 0;
}